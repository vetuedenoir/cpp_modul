#include "BitcoinExchange.hpp"

bool isValidDateFormat(const std::string& date) {
    // Expression régulière pour le format YYYY-MM-DD
	  if (date.length() != 10)
        return false;

    for (size_t i = 0; i < date.length(); ++i) {
        if (i == 4 || i == 7) {
            if (date[i] != '-')
                return false;
        } else {
            if (!std::isdigit(date[i]))
                return false;
        }
    }
    return true;
}

BitcoinExchange::BitcoinExchange () 
{
	std::ifstream	flue("data.csv");
	std::string		line;
	std::string		date;
	std::string		sval;
	float			value;
	size_t			f;
	char			*endptr = NULL;

	if (!flue.is_open())
		throw std::runtime_error("Error:\ncan't open data_base");
	if (!getline(flue, line))
		throw std::runtime_error("Error\ncorrupte data_base");
	if (line.compare("date,exchange_rate"))
		throw std::runtime_error("Error\ncorrupte data_base");
	while (42)
	{
		if (!getline(flue, line))
			break ;
		f = line.find(',');
		if (f != 10)
			throw std::runtime_error("Error\ninvalide format data_base");
		date = line.substr(0, f);
		if (!isValidDateFormat(date))
			throw std::runtime_error("Error:\ninvalide format data_base");
		sval = line.substr(f + 1);
		value = strtof(sval.c_str(), &endptr);
		if (sval == endptr)
			throw std::runtime_error("Error:\ninvalide format data_base");
		data_base.insert(std::pair<std::string, float>(date, value));
	}
}

BitcoinExchange::BitcoinExchange (std::string &file_base)
{
	std::ifstream	flue(file_base.c_str());
	std::string		line;
	std::string		date;
	std::string		sval;
	float			value;
	size_t			f;
	char			*endptr = NULL;

	if (!flue.is_open())
		throw std::runtime_error("Error:\ncan't open data_base");
	if (!getline(flue, line))
		throw std::runtime_error("Error\ncorrupte data_base");
	if (line.compare("date,exchange_rate"))
		throw std::runtime_error("Error\ncorrupte data_base");
	while (42)
	{
		if (!getline(flue, line))
			break ;
		f = line.find(',');
		if (f != 10)
			throw std::runtime_error("Error\ninvalide format data_base");
		date = line.substr(0, f);
		if (!isValidDateFormat(date))
			throw std::runtime_error("Error:\ninvalide format data_base");
		sval = line.substr(f + 1);
		value = strtof(sval.c_str(), &endptr);
		if (sval == endptr)
			throw std::runtime_error("Error:\ninvalide format data_base");
		data_base.insert(std::pair<std::string, float>(date, value));
	}
}

BitcoinExchange::BitcoinExchange (const BitcoinExchange &model)
{
	*this = model;
}

BitcoinExchange::~BitcoinExchange ()
{
	
}


BitcoinExchange&	BitcoinExchange::operator= (const BitcoinExchange &copie)
{
	data_base = copie.data_base;
	return *this;
}

bool	check_format_line(std::string &line)
{
	std::string		date;
	std::string		sval;
	float			value;
	size_t			f;
	char			*endptr = NULL;

	try
	{
		f = line.find('|');
		if (f != 11)
			throw std::runtime_error("Error: invalide format data_base");
		date = line.substr(0, f);
		if (!isValidDateFormat(date))
			throw std::runtime_error("Error: invalide format data_base");
		sval = line.substr(f + 1);
		value = strtof(sval.c_str(), &endptr);
		if (sval == endptr)
			throw std::runtime_error("Error: invalide format data_base");
	}
}


void	BitcoinExchange::processe_imput(std::string &imput_file)
{
	std::ifstream	flue(file_base.c_str());
	std::string		line;
	std::string		date;
	std::string		sval;
	float			value;
	size_t			f;
	char			*endptr = NULL;

	if (!flue.is_open())
		throw std::runtime_error("Error: can't open imput_file");
	if (!getline(flue, line))
		throw std::runtime_error("Error: corrupte imput_file");
	if (line.compare("date | value"))
		throw std::runtime_error("Error: corrupte imput_file");
	while (42)
	{
		if (!getline(flue, line))
			break ;
		if (check_format_line(line))
		{

		}
	}

}

void	BitcoinExchange::processe_line()
{

}