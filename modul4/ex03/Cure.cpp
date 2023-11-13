/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:25:03 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:25:04 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure (std::string const &type) : AMateria(type) {}

Cure::Cure () : AMateria("cure") {}

Cure::Cure (const Cure &copie) : AMateria(copie)
{
	*this = copie;
}

Cure::~Cure () {}

Cure&	Cure::operator= (const Cure &model)
{
	type = model.type;
	return *this;
}

Cure*	Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << " wounds *" << std::endl;
}

