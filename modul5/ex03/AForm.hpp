/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kscordel <kscordel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 17:53:54 by kscordel          #+#    #+#             */
/*   Updated: 2024/01/20 17:53:55 by kscordel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat ;

class AForm
{
	const std::string	name;
	const int			gradeSigne;
	const int			gradeExec;
	bool				isSigned;
public:
	AForm();
	AForm(const std::string n_name, int n_gradeSigne, int n_gradeExec);
	AForm(const std::string n_name, int n_gradeSigne, int n_gradeExec, bool n_isSigned);
	AForm(const AForm &copie);
	virtual	~AForm();

	AForm&	operator= (const AForm &model);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeExec() const;
	int			getGradeSigne() const;

	virtual void	beSigned(const Bureaucrat &bc);

	virtual void	execute(const Bureaucrat &executor) const = 0;

	class GradeTooHighException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too low";}
	};

	class NotSignedException : public std::exception
	{	public:
			const char *what() const throw() {return "The Form is not signed";}
	};

};

std::ostream & operator << ( std::ostream &out, const AForm &f);

#endif