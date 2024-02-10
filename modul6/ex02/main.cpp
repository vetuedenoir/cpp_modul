/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 20:38:50 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/10 14:37:13 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
# include <cstdlib>
# include <ctime>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"


Base	*generate(void)
{
		
		int	random;
	
		random = rand() % 30;
		if (random < 10)
			return (new A);
		if (random >= 10 && random < 20)
			return (new B);
		if (random >= 20)
			return (new C);
		return (NULL);
}

void	identify(Base *p)
{
	Base *x;
	
	x = dynamic_cast<A *>(p);
	if (x != 0)
		return (std::cout << "object is of type A" << std::endl, (void)0);
	x = dynamic_cast<B *>(p);
	if (x != 0)
		return (std::cout << "object is of type B" << std::endl, (void)0);
	x = dynamic_cast<C *>(p);
	if (x != 0)
		return (std::cout << "object is of type C" << std::endl, (void)0);
	x = dynamic_cast<Base *>(p);
	if (x != 0)
		std::cout << "object is of type Base" << std::endl;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		return (std::cout << "object is of type A" << std::endl, (void)0);
	}
	catch (const std::exception &e){}
	try
	{
		(void)dynamic_cast<B &>(p);
		return (std::cout << "object is of type B" << std::endl, (void)0);
	}
	catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<C &>(p);
		return (std::cout << "object is of type C" << std::endl, (void)0);
	}
	catch (const std::exception &e) {}
	try
	{
		(void)dynamic_cast<Base &>(p);
		return (std::cout << "object is of type Base" << std::endl, (void)0);
	}
	catch (const std::exception &e) {}
}

int	main()
{
	srand (time(NULL));
	int	i;
	Base	*bb = new Base;
	Base		*a = new A;
	Base		*b = new B;
	Base		*c = new C;
	
	try
	{
		identify(a);
		identify(*a);
		std::cout << "  " << std::endl;
		identify(b);
		identify(*b);
		std::cout << "  " << std::endl;
		identify(c);
		identify(*c);
		std::cout << "  " << std::endl;
		identify(bb);
		identify(*bb);
		std::cout << " \n--------------------------------------------------\n " << std::endl;

		Base	*pt;
		for (i = 0; i < 10; i++)
		{
			pt = generate();
			identify(pt);
			identify(*pt);
			std::cout << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
		
}