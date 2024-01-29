/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:58:31 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/29 19:51:11 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter () {}

ScalarConverter::ScalarConverter (const ScalarConverter &copie)
{
	*this = copie;
}

ScalarConverter::~ScalarConverter () {}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter &model)
{
	(void)model;
	return *this;
}

bool	ScalarConverter::isChar(std::string str)
{
	
	if (str.length() == 1 && isprint(str[0]) && !std::isdigit(str[0]))
		return true;
	else
		return false;
}

bool	ScalarConverter::isInt(std::string str)
{
	unsigned long int	i = 0;

	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i != 0 || !(str[i] == '-' || str[i] == '+'))
				return false;
		}
		if (i > 10)
			return false;
	}
	long long t = atol(str.c_str());
	if (t > INT_MAX || t < INT_MIN)
		return false; 
	return true;
}

bool	ScalarConverter::isFloat(std::string str)
{
	char	*endptr = NULL;
	
	strtof(str.c_str(), &endptr);
	return ((*endptr == 'f') && endptr == &str[str.length() - 1]);
}

bool	ScalarConverter::isDouble(std::string str)
{
		char	*endptr = NULL;
	
	strtod(str.c_str(), &endptr);
	return (endptr == &str[str.length()]);
}

void	ScalarConverter::strToChar(std::string str)
{
	char c = str[0];
	int	 i = static_cast<int>(c);;
	float	f = static_cast<float>(c);
	double	d = static_cast<double>(c);
	
	std::cout << "char: \"" << c << "\"" << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f  << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void		ScalarConverter::strToInt(std::string str)
{
	int	nb = atoi(str.c_str());
	char c = static_cast<char>(nb);
	float	f = static_cast<float>(nb);
	double	d = static_cast<double>(nb);

	if (nb > static_cast<int>(CHAR_MAX) || nb < static_cast<int>(CHAR_MIN))
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (std::isprint(c))
			std::cout << "char: \"" << c << "\"" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	std::cout << "int: " << nb << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f  << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;
}

void	ScalarConverter::strToFloat(std::string str)
{
	char	*endptr = NULL;
	float	nb = strtof(str.c_str(), &endptr);
	char	c = static_cast<char>(nb);
	int		i = static_cast<int>(nb);
	double	d = static_cast<double>(nb);

	if (nb > static_cast<float>(CHAR_MAX) || nb < static_cast<float>(CHAR_MIN))
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (std::isprint(c))
			std::cout << "char: \"" << c << "\"" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	if (isnan(nb) || isinf(nb) || nb > static_cast<float>(INT_MAX) || nb < static_cast<float>(INT_MIN))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << nb  << 'f' << std::endl;
	std::cout << "double: " << d << std::endl;	
}

void	ScalarConverter::strToDouble(std::string str)
{
	char	*endptr = NULL;	
	double	nb = strtod(str.c_str(), &endptr);
	char	c = static_cast<char>(nb);
	int		i = static_cast<int>(nb);
	float	f = static_cast<float>(nb);
	
	if (nb > static_cast<double>(CHAR_MAX) || nb < static_cast<double>(CHAR_MIN))
		std::cout << "char: impossible" << std::endl;
	else
	{
		if (std::isprint(c))
			std::cout << "char: \"" << c << "\"" << std::endl;
		else
			std::cout << "char: Non displayable" << std::endl;
	}
	if (isnan(nb) || isinf(nb) || nb > static_cast<double>(INT_MAX) || nb < static_cast<double>(INT_MIN))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << f  << 'f' << std::endl;
	std::cout << "double: " << nb << std::endl;	
}

void ScalarConverter::convert(std::string str)
{
	ScalarConverter obj;

	if (ScalarConverter::isChar(str))
	{
		obj.strToChar(str);
	}
	else if (ScalarConverter::isInt(str))
	{
		obj.strToInt(str);
	}
	else if (ScalarConverter::isFloat(str))
	{
		obj.strToFloat(str);
	}
	else if (ScalarConverter::isDouble(str))
	{
		obj.strToDouble(str);
	}
	else
		std::cout << "caractere not displayable or format not respected" << std::endl;
}