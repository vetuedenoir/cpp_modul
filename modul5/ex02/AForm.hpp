#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Bureaucrat.hpp"

class Bureaucrat ;

class AForm
{
	AForm();
	const std::string	name;
	bool				isSigned;
	const int			gradeSigne;
	const int			gradeExec;
public:
	AForm(const std::string n_name, int n_gradeSigne, int n_gradeExec);
	AForm(const AForm &copie);
	virtual	~AForm();

	AForm&	operator= (const AForm &model);

	std::string	getName() const;
	bool		getIsSigned() const;
	int			getGradeExec() const;
	int			getGradeSigne() const;

	void	beSigned(const Bureaucrat &bc);

	virtual void	execute(const Bureaucrat &executor) const = 0;

	class GradeTooHighException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{	public:
			const char *what() const throw() {return "The grade is too low";}
	};

};

std::ostream & operator << ( std::ostream &out, const AForm &f);

#endif