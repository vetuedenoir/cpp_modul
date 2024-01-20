/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 18:00:52 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 18:00:54 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{

}

void Weapon::setType(std::string name)
{
	type = name;
}

const std::string &Weapon::getType()
{
	const std::string &get = type;
	return get;
}

Weapon::~Weapon ()
{

}
