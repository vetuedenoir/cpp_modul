/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:22:07 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:08 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("not define")
{
	std::cout << "constructeur WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copie)
{
	*this = copie;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destucteur WrongAnimal" << std::endl;
}
	
WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &model)
{
	type = model.type;
	return *this;
}
	
void	WrongAnimal::makeSound () const
{
	std::cout << "..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
