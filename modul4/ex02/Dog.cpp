/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:12 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:24:13 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	srand (time(NULL));
	brain = new Brain();
	type = "Dog";
	std::cout << "constructeur Dog" << std::endl;
}

Dog::Dog(const Dog &copie) : Animal()
{
	std::cout << "constructeur copie Dog" << std::endl;
	*this = copie;
}

Dog::~Dog()
{
	delete (brain);
	std::cout << "destructeur Dog" << std::endl;
}
	
Dog&	Dog::operator= (const Dog &model)
{
	type = model.type;
	return *this;
}
	
void	Dog::makeSound () const
{
	std::cout << "Woof Woooof " << std::endl;
}

void	Dog::think ()
{
	int	random;
	
	random = rand() % 10;
		if (random == 0)
		brain->getIdeas("J'adore les calins");
	if (random == 1)
		brain->getIdeas("j'ai faim...");
	if (random == 2)
		brain->getIdeas("J'adore jouer a la balle");
	if (random == 3)
		brain->getIdeas("Mon maitre est trop cool !");
	if (random == 4)
		brain->getIdeas("Je suis un bon chien !");
	if (random == 5)
		brain->getIdeas("je veux sortir !!!");
	if (random == 6)
		brain->getIdeas("Courir c est la vie");
	if (random == 7)
		brain->getIdeas("il raconte quoi lui ?");
	if (random == 8)
		brain->getIdeas("tiens un camarade ...");
	if (random == 9)
		brain->getIdeas("bizzar woof ?");
}

void	Dog::displayIdeas () const
{
	brain->retIdeas();
}

