/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:55:10 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:55:11 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : \
	AForm("RobotomyRequestForm", 72, 45), target("")
{
	srand (time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm (std::string target) : \
	AForm("RobotomyRequestForm", 72, 45), target(target)
{
	srand (time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &copie) : \
	AForm(copie.getName(), copie.getGradeSigne(), copie.getGradeExec(), copie.getIsSigned())   
{
	*this = copie;
	srand (time(NULL));
}

RobotomyRequestForm::~RobotomyRequestForm () {}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm &model)
{
	target = model.target;
	return *this;
}

std::string	RobotomyRequestForm::getTarget ()
{
	return target;
}

void	RobotomyRequestForm::execute (const Bureaucrat &executor) const
{
	int	random;
	
	random = rand() % 10;

	if (getIsSigned() == false)
		throw AForm::NotSignedException();
	else if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		if (random % 2)
			std::cout <<  target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
}