/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:37 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:38 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria (std::string const &type) : type(type) {}

AMateria::AMateria (const AMateria &copie)
{
	*this = copie;
}

AMateria::~AMateria () {}

AMateria&	AMateria::operator= (const AMateria &model)
{
	type = model.type;
	return *this;
}

std::string const & AMateria::getType() const
{
	return type;
} //Returns the materia type

void AMateria::use(ICharacter& target)
{
	std::cout << target.getName() << std::endl;
}
