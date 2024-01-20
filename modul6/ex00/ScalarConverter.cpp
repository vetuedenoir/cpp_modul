/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:58:31 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 20:02:06 by kscordel         ###   ########.fr       */
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