/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:54:46 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:54:47 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm () : \
	AForm("PresidentialPardonForm", 25, 5), target("") {}

PresidentialPardonForm::PresidentialPardonForm (std::string target) : \
	AForm("PresidentialPardonForm", 25, 5), target(target) {}

PresidentialPardonForm::PresidentialPardonForm (const PresidentialPardonForm &copie) : \
	AForm(copie.getName(), copie.getGradeSigne(), copie.getGradeExec(), copie.getIsSigned())   
{
	*this = copie;
}

PresidentialPardonForm::~PresidentialPardonForm () {}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm &model)
{
	target = model.target;
	return *this;
}

std::string	PresidentialPardonForm::getTarget ()
{
	return target;
}

void	PresidentialPardonForm::execute (const Bureaucrat &executor) const
{
	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout <<  target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}


