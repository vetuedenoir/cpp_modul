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
	int	i = 0;

	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
			return false;
	}
	return true;
}

bool	ScalarConverter::isFloat(std::string str)
{
	int	i = 0;
	int	np = 0;

	if (str.compare("nanf") || str.compare("-inff") || str.compare("+inff") || str.compare("inff"))
		return true;
	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (i + 1 == str.length() && str[i] != 'f')
				return false;
			else if (str[i] == '.')
			{
				if (np == 2 || i == 0 || i + 1 == str.length())
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
	int	i;
	int	np = 0;
	
	if (str.compare("nan") || str.compare("-inf") || str.compare("+inf") || str.compare("inf"))
		return true;
	for (i = 0; i < str.length(); i++)
	{
		if (!isdigit(str[i]))
		{
			if (str[i] != '.')
				return false;
			else if (str[i] == '.' && (i == 0 || i + 1 == str.length()))
				return false;
			else if (str[i] == '.')
				np++;
			if (np > 1)
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
	double	after = 0.0;
	std::string	past("");
	
	int	i = 0;

	while (str[i])
	{
		if (str[i] == '.')
			break ;
		i++;
	}
	past = str.substr(i);
	after = atoi(past.c_str());
	while (i > 0)
	{
		after /= 10;
		i--;
	}
	after += atoi()；
	
}

double	ScalarConverter::strToDouble(std::string str)
{
	
}