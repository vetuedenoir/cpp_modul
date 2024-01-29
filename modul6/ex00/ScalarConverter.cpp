/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:58:31 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/27 22:07:56 by kscordel         ###   ########.fr       */
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
	
	if (str.length() == 1 && isprint(str[0]))
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
	}
	return true;
}

bool	ScalarConverter::isFloat(std::string str)
{
	unsigned long int	i = 0;
	int	np = 0;
	unsigned long int	s = 0;

	if (str[str.length() - 1] != 'f')
				return false;
	if (str.compare("nanf") || str.compare("-inff") || str.compare("+inff") || str.compare("inff"))
		return true;
	if (str[0] == '-' ||str[0] == '+')
		s = 1;
	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] == '.')
			{
				if (np == 2 || i == s || i + 1 == str.length())
					return false;
				np++;
			}
			if (np > 1)
				return false;
		}
	}
	if (str[str.length() - 1 ] != 'f')
		return false;
	return true;
}

bool	ScalarConverter::isDouble(std::string str)
{
	unsigned long int	i = 0;
	int	np = 0;
	unsigned long int	s = 0;

	if (str.compare("nan") || str.compare("-inf") || str.compare("+inf") || str.compare("inf"))
		return true;
	if (str[0] == '-' ||str[0] == '+')
		s = 1;
	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] != '.')
				return false;
			if (i == s || i + 1 == str.length())
				return false;
			if (++np > 1)
				return false;
		}
	}
	return true;
}

char	ScalarConverter::strToChar(std::string str)
{
	return (str[0]);	
}

int		ScalarConverter::strToInt(std::string str)
{
	return (atoi(str.c_str()));
}

float	ScalarConverter::strToFloat(std::string str)
{
	float	after = 0.0;
	std::string	past("");
	int	i = 0;

	while (str[i])
	{
		if (str[i] == '.')
			break ;
		i++;
	}
	past = str.substr(i + 1);
	after = atoi(past.c_str());
	i = past.length() - 1;
	while (i > 0)
	{
		after /= 10.0;
		i--;
	}
	if (str[0] == '-')
		after *= -1;
	after += (double)atoi(str.c_str());
	return after;
}

double	ScalarConverter::strToDouble(std::string str)
{
	double	after = 0.0;
	std::string	past("");
	int	i = 0;

	after = nan(str.c_str());
	return after;
	while (str[i])
	{
		if (str[i] == '.')
			break ;
		i++;
	}
	past = str.substr(i + 1);
	after = atoi(past.c_str());
	i = past.length();
	while (i > 0)
	{
		after /= 10.0;
		i--;
	}
	if (str[0] == '-')
		after *= -1;
	after += (double)atoi(str.c_str());
	return after;
}

void ScalarConverter::convert(std::string str)
{
	ScalarConverter obj;

	if (ScalarConverter::isChar(str))
	{
		std::cout << obj.strToChar(str) << std::endl;
	}
	else if (ScalarConverter::isInt(str))
	{
		std::cout << obj.strToInt(str) << std::endl;
	}
	else if (ScalarConverter::isFloat(str))
	{
		std::cout << obj.strToFloat(str) << std::endl;
	}
	else if (ScalarConverter::isDouble(str))
	{
		std::cout << obj.strToDouble(str) << std::endl;
	}

}