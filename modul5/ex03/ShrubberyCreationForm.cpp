/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:55:22 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:55:23 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () : \
	AForm("ShrubberyCreationForm", 145, 137), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm (std::string target) : \
	AForm("ShrubberyCreationForm", 145, 137), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &copie) : \
	AForm(copie.getName(), copie.getGradeSigne(), copie.getGradeExec(), copie.getIsSigned())   
{
	*this = copie;
}

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm &model)
{
	target = model.target;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget ()
{
	return target;
}

void	ShrubberyCreationForm::execute (const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::string name_fichier(target);
		name_fichier.insert(name_fichier.size(), "_shrubbery");

		std::ofstream fichier (name_fichier.c_str());
		if (!fichier.is_open())
		{
			std::cerr << "Erreur: impossible de creer le fichier " << name_fichier << "\n";
			fichier.close();
			return ;
		}
fichier << "          *\n"\
<<"         *.*\n"\
<<"        *...*\n"\
<<"       *.....*\n"\
<<"      *.......*\n"\
<<"     *.........*\n"\
<<"    *...........*\n"\
<<"   *.............*\n"\
<<"  *...............*\n"\
<<" *.................*\n"
<<"         || \n" << std::endl;
	fichier.close();
	}
}

