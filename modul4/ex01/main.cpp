/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:23:22 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:23:23 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

void ft_lavie(Animal **a, int size)
{
	int i = 0;
	
	std::cout << std::endl;
	while (i < size)
	{
		std::cout << a[i]->getType() << " " << std::endl;
		a[i]->makeSound();
		i++;
	}
	std::cout << std::endl;
}

/*
	Il n est pas possible d'utiliser les fonctions
	brain dans un pointeur sur Animal car Animal
	ne contient pas les prototypes de ces fonctions.
*/

void	testbrain()
{
	Cat	minou;
	Dog	rex;
	int i;
	
	std::cout << "\nTest brain" << std::endl;
	for (i = 0; i < 5; i++)
	{
		minou.think();
		rex.think();
	}
	minou.displayIdeas();
	std::cout << std::endl;
	rex.displayIdeas();
	std::cout << std::endl;
}

int main()
{
	Animal *tab[4];
	int	i;
	
	tab[0] = new Cat();
	tab[1] = new Dog();
	tab[2] = new Cat();
	tab[3] = new Dog();

	ft_lavie(tab, 4);
	testbrain();
	std::cout << std::endl;

	for (i = 0; i < 4; i++)
		delete tab[i];
	return (0);
}

