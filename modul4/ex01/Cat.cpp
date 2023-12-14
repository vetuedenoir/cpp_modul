/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:05 by kscordel          #+#    #+#             */
/*   Updated: 2023/12/04 16:17:59 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	brain = new Brain();
	srand (time(NULL));
	type = "Cat";
	std::cout << "constructeur Cat" << std::endl;
}

Cat::Cat(const Cat &copie) : Animal()
{
	brain = NULL;
	std::cout << "constructeur copie Cat" << std::endl;
	*this = copie;
}

Cat::~Cat()
{
	delete (brain);
	std::cout << "destructeur Cat" << std::endl;
}
	
Cat&	Cat::operator= (const Cat &model)
{
	if (brain != NULL)
		delete brain;
	type = model.type;
	brain = new Brain (*model.brain);
	return *this;
}
	
void	Cat::makeSound () const
{
	std::cout << "Miiaouuu " << std::endl;
}

void	Cat::think ()
{
	int	random;
	
	random = rand() % 10;
	if (random == 0)
		brain->getIdeas("miaouu ? miaouu ?..");
	if (random == 1)
		brain->getIdeas("une Souris !");
	if (random == 2)
		brain->getIdeas("cible reperer");
	if (random == 3)
		brain->getIdeas("a l attaque");
	if (random == 4)
		brain->getIdeas("les chats sont les meilleurs");
	if (random == 5)
		brain->getIdeas("voila mon offrande");
	if (random == 6)
		brain->getIdeas("Ho un chien, mon ennemie jure !");
	if (random == 7)
		brain->getIdeas("trop fatiguee !..");
	if (random == 8)
		brain->getIdeas("besoin de caresse");
	if (random == 9)
		brain->getIdeas("faut faire un salto et normalent sa passe");
}

void	Cat::displayIdeas () const
{
	brain->retIdeas();
}

