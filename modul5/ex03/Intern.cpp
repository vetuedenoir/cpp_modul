/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:54:15 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:54:16 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern () {}

Intern::Intern (const Intern& copie)
{
	*this = copie;
}

Intern::~Intern() {}

Intern&	Intern::operator= (const  Intern &model)
{
	(void)model;
	return *this;
}

AForm*	Intern::makeForme(std::string name, std::string target)
{
	int i = 0;
	std::string formNames[] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
    while (i < 3)
	{
        if ( name == formNames[i] )
		{
            std::cout << "Intern creates " << name << std::endl;
			break ;
        }
		i++;
    }
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(target));
		case 1:
			return (new PresidentialPardonForm(target));
		case 2:
			return (new ShrubberyCreationForm(target));
		break;
	default:
		std::cout << "Intern cannot create " << name << " form" << std::endl;
    	return NULL;
		break;
	}
}