/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 18:21:59 by kscordel          #+#    #+#             */
/*   Updated: 2023/11/13 18:22:00 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

void ft(const Animal &a)
{
	std::cout << a.getType() << " " << std::endl;
	a.makeSound();
}

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	ft(*meta);
	ft(*j);
	ft(*i);
	
	delete(meta);
	delete(j);
	delete(i);
	
	std::cout << "-----------------WRONG--------------" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal(); 
	const WrongAnimal* wi = new WrongCat();
	const WrongCat* we = new WrongCat();

	std::cout << "type: " << wmeta->getType() << " " << std::endl; 
	std::cout << "type: " << wi->getType() << " " << std::endl; 
	wi->makeSound(); 
	we->makeSound();
    wmeta->makeSound();

	delete wmeta;
	delete wi;
	delete we;

	return (0);
}

