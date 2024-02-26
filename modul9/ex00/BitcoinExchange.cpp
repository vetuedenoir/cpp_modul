#include "BitcoinExchange.hpp"

bool isBisextile(int annee)
{
	if (annee % 100 == 0 && annee % 400 == 0)
		return true;
	else if (annee % 100 != 0 && annee % 4 == 0)
		return true;
	else
		return false;
}

bool isDatePossible(const std::string &date)
{
	int annee;
	int mois;
	int jour;
	bool bisextile = false;
	const char *cdate = date.c_str();

	if (date.size() != 10)
		return false;
	annee = atoi(cdate);
	mois = atoi(&cdate[5]);
	jour = atoi(&cdate[8]);
	if (mois > 12 || jour > 31)
		return false;
	if ((mois == 1 || mois == 3 || mois == 5 || mois == 7 || \
		mois == 8 || mois == 10 || mois == 12) && jour <= 31)
		return true;
	if (mois != 2 && jour <= 30)
		return true;
	bisextile = isBisextile(annee);
	if (mois == 2 && bisextile && jour <= 29)
		return true;
	if (mois == 2 && !bisextile && jour <= 28)
		return true;
	return false;
}

bool isValidDateFormat(const std::string &date) // format YYYY-MM-JJ
{
	if (date.length() != 10)
		return false;

	for (size_t i = 0; i < date.length(); ++i)
	{
		if (i == 4 || i == 7)
		{
			if (date[i] != '-')
				return false;
		}
		else
		{
			if (!std::isdigit(date[i]))
				return false;
		}
	}
	return true;
}

BitcoinExchange::BitcoinExchange()
{
	std::ifstream	flue("data.csv");
	std::string line;
	std::string date;
	std::string sval;
	size_t		f;
	float		value;
	char		*endptr = NULL;

	if (!flue.is_open())
		throw std::runtime_error("Error: can't open data_base");
	if (!getline(flue, line))
		throw std::runtime_error("Error: corrupte data_base");
	if (line.compare("date,exchange_rate"))
		throw std::runtime_error("Error\ncorrupte data_base");
	while (42)
	{
		if (!getline(flue, line))
			break;
		f = line.find(',');
		if (f != 10)
			throw std::runtime_error("Error: invalide format data_base");
		date = line.substr(0, f);
		if (!isValidDateFormat(date))
			throw std::runtime_error("Error: invalide format data_base");
		if (!isDatePossible(date))
			throw std::runtime_error("Error: impossible date data_base");
		sval = line.substr(f + 1);
		const char *str = sval.c_str();
		value = strtof(str, &endptr);
		if (str + sval.size() != endptr)
			throw std::runtime_error("Error: invalide format data_base");
		if (value < 0)
			throw std::runtime_error("Error: impossible value data_base");
		data_base.insert(std::pair<std::string, float>(date, value));
	}
}

BitcoinExchange::BitcoinExchange(std::string &file_base)
{
	std::ifstream flue(file_base.c_str());
	std::string line;
	std::string date;
	std::string sval;
	float value;
	size_t	f;
	char	*endptr = NULL;

	if (!flue.is_open())
		throw std::runtime_error("Error: could not open data_base");
	if (!getline(flue, line))
		throw std::runtime_error("Error: corrupte data_base");
	if (line.compare("date,exchange_rate"))
		throw std::runtime_error("Error: corrupte data_base");
	while (42)
	{
		if (!getline(flue, line))
			break;
		f = line.find(',');
		if (f != 10)
			throw std::runtime_error("Error: invalide format data_base");
		date = line.substr(0, f);
		if (!isValidDateFormat(date))
			throw std::runtime_error("Error: invalide format data_base");
		if (!isDatePossible(date))
			throw std::runtime_error("Error: impossible date data_base");
		sval = line.substr(f + 1);
		const char *str = sval.c_str();
		value = strtof(str, &endptr);
		if (str  + sval.size() != endptr)
			throw std::runtime_error("Error: invalide format data_base");
		if (value < 0)
			throw std::runtime_error("Error: impossible value data_base");
		data_base.insert(std::pair<std::string, float>(date, value));
	}
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &model)
{
	*this = model;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &copie)
{
	data_base = copie.data_base;
	return *this;
}



void	is_good_value(const std::string &value)
{
	float		nb;
	char		*endptr = NULL;
	const char	*cstr = value.c_str();
	size_t		point;

	if (value.size() < 2 || value.size() > 20)
		throw std::runtime_error("Error: bad input");
	if (value[1] == ' ' || value[1] == '\t')
		throw std::runtime_error("Error: bad input");
	nb = strtof(cstr, &endptr);
	if (endptr != cstr + value.size())
		throw std::runtime_error("Error: bad input");
	if (nb < 0)
		throw ("Error: not a positive number.");
	if (nb > 1000)
		throw ("Error: too large a number.");
	point = value.find('.');
	if (point != std::string::npos)
	{
		if (endptr - (cstr + point) == 1)
			throw std::runtime_error("Error: bad input");
		if (endptr - (cstr + point) > 9)
			throw ("Error: smallest unite is 0,00000001 Bitcoin");
	}
}

void check_format_line(const std::string &line)
{
	std::string date;
	std::string sval;
	size_t		f;

	f = line.find('|');
	if (f != 11)
		throw std::runtime_error("Error: bad input");
	if (line[10] != ' ' || line[12] != ' ')
		throw std::runtime_error("Error: bad input");
	date = line.substr(0, f - 1);
	if (!isValidDateFormat(date))
		throw std::runtime_error("Error: bad input");
	if (!isDatePossible(date))
		throw std::runtime_error("Error: bad input");
	sval = line.substr(f + 1);
	is_good_value(sval);
}

void BitcoinExchange::processe_line(const std::string &line)
{
	try
	{
		check_format_line(line);
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << " => " << line.substr(0, 33) << std::endl;
	}
	catch (const char *e)
	{
		std::cerr << e << std::endl;
	}
}

void BitcoinExchange::processe_imput(std::string &imput_file)
{
	std::ifstream flue(imput_file.c_str());
	std::string line;

	if (!flue.is_open())
		throw std::runtime_error("Error: could not open file");
	if (!getline(flue, line))
		throw std::runtime_error("Error: empty file");
	if (line.compare("date | value"))
		processe_line(line);
	while (42)
	{
		if (!getline(flue, line))
			break;
		if (line.size() != 0)
			processe_line(line);
	}
}

