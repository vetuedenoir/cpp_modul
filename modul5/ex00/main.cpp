/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:58:26 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:58:28 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>
#include <string>

int	main()
{
	try
	{
		Bureaucrat toto("TOTO", 2000);
		std::cout << toto << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat omni("OMNI", 0);
		std::cout << omni << std::endl << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << "\n-----------------------------------------------\n";
		Bureaucrat boby("Boby", 100);
		Bureaucrat macron("Macron", 1);
		Bureaucrat brigitte("Brigitte", 150);

		std::cout << boby << std::endl;
		std::cout << macron << std::endl;
		std::cout << brigitte << std::endl << std::endl;
		try
		{
			boby.incrementGrade();
			std::cout << boby << std::endl;
		}
		catch(const std::exception& e)
		{	std::cerr << e.what() << '\n';
		}
		try
		{
			macron.incrementGrade();
			std::cout << macron << std::endl;
		}
		catch(const std::exception& e)
		{	std::cerr << e.what() << '\n';
		}
		try
		{
			brigitte.decrementeGrade();
			std::cout << brigitte << std::endl;
		}
		catch(const std::exception& e)
		{	std::cerr << e.what() << '\n';
		}
	}
	catch(const std::exception& e)
	{	std::cerr << e.what() << '\n';
	}
	return (0);
}
