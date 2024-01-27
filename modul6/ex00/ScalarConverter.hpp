/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:56:57 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/27 19:40:15 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <cctype>

class ScalarConverter
{
	ScalarConverter	();
	ScalarConverter	(const ScalarConverter &copie);
	ScalarConverter&	operator= (const ScalarConverter &model);
public:
	~ScalarConverter();

	bool	isChar(std::string str);
	bool	isInt(std::string str);
	bool	isFloat(std::string str);
	bool	isDouble(std::string str);

	char	strToChar(std::string str);
	int		strToInt(std::string str);
	float	strToFloat(std::string str);
	double	strToDouble(std::string str);

};


#endif