/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 19:20:48 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/26 19:55:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(const std::string &str)
{
	for (int i = 0; str[i]; i++)
	{
		// a voir
	}
}

RPN::RPN(const RPN &model)
{
	*this = model;
}

RPN&	RPN::operator= (const RPN &copie)
{
	line = copie.line;
}