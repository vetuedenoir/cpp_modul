#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat ;

class Form
{
	Form();
	const std::string	name;
	bool				isSigned;
	const int			gradeSigne;
	const int			gradeExec;
public:
	Form(const std::string n_name, int n_gradeSigne, int n_gradeExec);
	Form(const Form &copie);
	~Form();

	Form&	operator= (const Form &model);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeExec() const;
	int			getGradeSigne() const;

	void	beSigned(const Bureaucrat &bc);

	class GradeTooHighException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too low";}
	};

};

std::ostream & operator << ( std::ostream &out, const Form &f);

#endif