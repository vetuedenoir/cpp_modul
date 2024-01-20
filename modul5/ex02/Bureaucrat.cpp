/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:56:06 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:56:07 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat (const std::string n_name, const int n_grade) : name(n_name)
{
	setGrade(n_grade);
}

Bureaucrat::Bureaucrat (const Bureaucrat &copie) : name(copie.name), grade(copie.grade) 
{}

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator= (const Bureaucrat &model)
{
	grade = model.grade;
	return *this;
}


std::string	Bureaucrat::getName () const
{
	return name;
}

int		Bureaucrat::getGrade () const
{
	return grade;
}

void	Bureaucrat::setGrade (const int n_grade)
{
	if (n_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (n_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade = n_grade;
}

void	Bureaucrat::incrementGrade ()
{
	if (grade == 1)
		throw Bureaucrat::GradeTooHighException();
	else
		grade--;
}

void	Bureaucrat::decrementeGrade ()
{
	if (grade == 150)
		throw Bureaucrat::GradeTooLowException();
	else
		grade++;
}

void	Bureaucrat::signeForm (AForm &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << name << " signed " << form.getName() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr <<  name << " couldn't sign " << form.getName() << \
			" because " << e.what() << '\n';
	}
}

void	Bureaucrat::executeForm(const AForm & form)
{
	try
	{
		form.execute(*this);
		std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr <<  name << " couldn't execute " << form.getName() << \
			" because " << e.what() << '\n';
	}
	
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}
