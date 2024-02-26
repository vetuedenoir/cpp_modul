#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <cstdlib>


class BitcoinExchange
{
	std::map <std::string, float> data_base;
public:
	BitcoinExchange ();
	BitcoinExchange (std::string &file_base); //throw (char *);
	BitcoinExchange (const BitcoinExchange &model);
	~BitcoinExchange ();

	BitcoinExchange&	operator= (const BitcoinExchange &copie);

	void	processe_imput(std::string &imput_file);
	void	processe_line(const std::string &line);

	
};


#endif