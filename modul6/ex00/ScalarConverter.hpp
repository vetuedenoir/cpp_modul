/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:56:57 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/29 19:22:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>
#include <cstdlib>
#include <math.h>
#include <iomanip>
#include <climits>

class ScalarConverter
{
	ScalarConverter	();
	ScalarConverter	(const ScalarConverter &copie);
	ScalarConverter&	operator= (const ScalarConverter &model);

	void	strToChar(std::string str);
	void	strToInt(std::string str);
	void	strToFloat(std::string str);
	void	strToDouble(std::string str);

public:
	~ScalarConverter();

	static bool	isChar(std::string str);
	static bool	isInt(std::string str);
	static bool	isFloat(std::string str);
	static bool	isDouble(std::string str);

	static void convert(std::string str);

};


#endif