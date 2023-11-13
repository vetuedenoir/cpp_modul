/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:31 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:21:32 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "constructeur Cat" << std::endl;
}

Cat::Cat(const Cat &copie) : Animal()
{
	*this = copie;
}

Cat::~Cat()
{
	std::cout << "destructeur Cat" << std::endl;
}
	
Cat&	Cat::operator= (const Cat &model)
{
	type = model.type;
	return *this;
}
	
void	Cat::makeSound () const
{
	std::cout << "Miiaouuu " << std::endl;
}

