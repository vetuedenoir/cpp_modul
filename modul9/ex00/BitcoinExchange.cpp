#include "BitcoinExchange.hpp"


BitcoinExchange::BitcoinExchange () {}

BitcoinExchange::BitcoinExchange (std::string &file_base) throw (char *)
try
{
	std::ifstream	flue(file_base);
	std::string		line;
	std::string		date;
	std::string		sval;
	float			value;
	size_t			f;
	char			*endptr = NULL;

	if (!flue)
		throw ("Error:\ncan't open data_base");
	while (42)
	{
		if (!getline(flue, line))
			break ;
		f = line.find(',');
		if (f != 10)
			std::cout << "error\ncorupte data_base" << std::endl;
		date = line.substr(0, f);
		sval = line.substr(f + 1);
		value = strtof(sval.c_str(), &endptr);

	}
	
}
catch(const char *e)
{
	
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
	 
}


void	BitcoinExchange::init_data(std::string &file_base)
{
	
}

void	BitcoinExchange::processe_imput(std::string &imput_file)
{
	
}

void	BitcoinExchange::processe_line()
{

}