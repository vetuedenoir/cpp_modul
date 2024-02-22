/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:53:00 by kscordel          #+#    #+#             */
/*   Updated: 2024/02/22 20:42:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "AForm.hpp"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include "Intern.hpp"

int	main()
{
	try
	{
		Intern	damien;
		Bureaucrat boss("boss", 5);

		AForm *N1 = damien.makeForme("presidential pardon", "mederic");
		AForm *N2 = damien.makeForme("robotomy request", "Jean Pierre");
		AForm *N3 = damien.makeForme("shrubbery creation", "Hopital");
		AForm *N4 = damien.makeForme("something", "somewhere");

		std::cout << std::endl;
		if (N1)
		{
			boss.signeForm(*N1);
			boss.executeForm(*N1);
			delete N1;
		}
		std::cout << std::endl;
		if (N2)
		{
			boss.signeForm(*N2);
			boss.executeForm(*N2);
			delete N2;
		}
		std::cout << std::endl;
		if (N3)
		{
			boss.signeForm(*N3);
			boss.executeForm(*N3);
			delete N3;
		}
		std::cout << std::endl;
		if (N4)
		{
			boss.signeForm(*N4);
			boss.executeForm(*N4);
			delete N4;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
