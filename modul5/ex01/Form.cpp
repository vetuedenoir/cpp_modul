/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:57:42 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:57:43 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form () : name(""), gradeSigne(0), gradeExec(0)
{}

Form::Form (const std::string n_name, int n_gradeSigne, int n_gradeExec) : name(n_name), gradeSigne(n_gradeSigne), gradeExec(n_gradeExec)
{
	if (gradeExec > 150 || gradeSigne > 150)
		throw Form::GradeTooLowException();
	if (gradeExec < 1 || gradeSigne < 1)
		throw Form::GradeTooHighException();
}

Form::Form (const Form &copie) : name(copie.name), isSigned(copie.isSigned), \
	 gradeSigne(copie.gradeSigne), gradeExec(copie.gradeExec){}

Form::~Form () {}

Form&	Form::operator= (const Form &model)
{
	isSigned = model.isSigned;
	return *this;
}

std::string	Form::getName () const
{
	return name;
}

bool	Form::getIsSigned () const
{
	return isSigned;
}

int	Form::getGradeExec () const
{
	return gradeExec;
}

int	Form::getGradeSigne () const
{
	return gradeSigne;
}

void	Form::beSigned (const Bureaucrat &bc)
{
	if (bc.getGrade() > gradeSigne)
		throw Form::GradeTooLowException();
	else
		isSigned = true;
}


std::ostream &operator << (std::ostream &out, const Form &f)
{
	if (f.getIsSigned() == true)
		out << f.getName() << " is signed. Grade for signing is " << f.getGradeSigne() \
			<< " and grade for execution is " << f.getGradeExec() << std::endl;
	else
		out << f.getName() << " is not signed. Grade for signing is " << f.getGradeSigne() \
			<< " and grade for execution is " << f.getGradeExec() << std::endl;
	return out;
}


