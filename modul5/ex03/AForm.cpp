/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:53:46 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:53:48 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm () : name(""), gradeSigne(0), gradeExec(0)
{}

AForm::AForm (const std::string n_name, int n_gradeSigne, int n_gradeExec) : name(n_name), gradeSigne(n_gradeSigne), gradeExec(n_gradeExec)
{
	if (gradeExec > 150 || gradeSigne > 150)
		throw AForm::GradeTooLowException();
	if (gradeExec < 1 || gradeSigne < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm(const std::string n_name, int n_gradeSigne, int n_gradeExec, bool n_isSigned) :\
	name(n_name), gradeSigne(n_gradeSigne), gradeExec(n_gradeExec) , isSigned(n_isSigned)
{
	if (gradeExec > 150 || gradeSigne > 150)
		throw AForm::GradeTooLowException();
	if (gradeExec < 1 || gradeSigne < 1)
		throw AForm::GradeTooHighException();
}

AForm::AForm (const AForm &copie) : name(copie.name), gradeSigne(copie.gradeSigne), \
	gradeExec(copie.gradeExec), isSigned(copie.isSigned) {}

AForm::~AForm () {}

AForm&	AForm::operator= (const AForm &model)
{
	isSigned = model.isSigned;
	return *this;
}

std::string	AForm::getName () const
{
	return name;
}

bool	AForm::getIsSigned () const
{
	return isSigned;
}

int	AForm::getGradeExec () const
{
	return gradeExec;
}

int	AForm::getGradeSigne () const
{
	return gradeSigne;
}

void	AForm::beSigned (const Bureaucrat &bc)
{
	if (bc.getGrade() > gradeSigne)
		throw AForm::GradeTooLowException();
	else
		isSigned = true;
}


std::ostream &operator << (std::ostream &out, const AForm &f)
{
	if (f.getIsSigned() == true)
		out << f.getName() << " is signed. Grade for signing is " << f.getGradeSigne() \
			<< " and grade for execution is " << f.getGradeExec() << std::endl;
	else
		out << f.getName() << " is not signed. Grade for signing is " << f.getGradeSigne() \
			<< " and grade for execution is " << f.getGradeExec() << std::endl;
	return out;
}


