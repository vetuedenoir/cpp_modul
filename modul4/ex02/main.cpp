/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:24:19 by kscordel          #+#    #+#             */
/*   Updated: 2023/12/02 12:19:31 by kscordel         ###   ########.fr       */
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
	/*
	le code ne compile plus si on declare un objet Animal
	Animal test;
	*/
	
	tab[0] = new Cat();
	tab[1] = new Dog();
	tab[2] = new Cat();
	tab[3] = new Dog();
	Dog *d1 = new Dog();
	Dog *d2 = new Dog (*d1);
	
	d2->makeSound();

	ft_lavie(tab, 4);
	testbrain();
	std::cout << std::endl;
	delete d1;
	delete d2;
	for (i = 0; i < 4; i++)
		delete tab[i];
	return (0);
}

