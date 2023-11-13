/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:18 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:19 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("not define")
{
	std::cout << "constructeur Animal" << std::endl;
}

Animal::Animal(const Animal &copie)
{
	*this = copie;
}

Animal::~Animal()
{
	std::cout << "destucteur Animal" << std::endl;
}
	
Animal&	Animal::operator= (const Animal &model)
{
	type = model.type;
	return *this;
}
	
void	Animal::makeSound () const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType() const
{
	return type;
}
