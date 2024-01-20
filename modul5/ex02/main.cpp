/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:56:17 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:56:19 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>


#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat boby("Boby", 101);
		Bureaucrat macron("Macron", 1);
		Bureaucrat brigitte("Brigitte", 150);
		Bureaucrat bocal("Bocal", 42);
		ShrubberyCreationForm ff("Maison");
		RobotomyRequestForm robot("Franky");
		PresidentialPardonForm pp("prisonier");

		std::cout << "-------------------------------------------\n" \
		<< pp << std::endl;
		std::cout << macron << std::endl;
		macron.signeForm(pp);
		macron.executeForm(pp);

		std::cout << "\n-------------------------------------------\n" \
		<< ff << std::endl;
		std::cout << boby << std::endl;
		boby.signeForm(ff);
		boby.executeForm(ff);		

		std::cout << "\n-------------------------------------------\n" \
		<< robot << std::endl;
		std::cout << bocal << std::endl;
		bocal.signeForm(robot);
		bocal.executeForm(robot);		

		std::cout << "\n-------------------------------------------\n" \
		<< robot << std::endl;
		std::cout << brigitte << std::endl;
		brigitte.signeForm(robot);
		brigitte.executeForm(ff);		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return (0);
}
