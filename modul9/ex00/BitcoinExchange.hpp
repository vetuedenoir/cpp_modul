/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 18:46:41 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/26 18:46:42 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
# define BITCOINEXCHANGE

#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <exception>
#include <cstdlib>
#include <iomanip>


class BitcoinExchange
{
	std::map <std::string, double> data_base;
public:
	BitcoinExchange ();
	BitcoinExchange (std::string &file_base); //throw (char *);
	BitcoinExchange (const BitcoinExchange &model);
	~BitcoinExchange ();

	BitcoinExchange&	operator= (const BitcoinExchange &copie);

	void	search_and_convert(const std::string &line);
	void	processe_imput(std::string &imput_file);
	void	processe_line(const std::string &line);

	
};


#endif