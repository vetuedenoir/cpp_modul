
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <exception>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	Bureaucrat();
	const std::string	name;
	int					grade;

public:
	Bureaucrat(const std::string n_name, const int n_grade);
	Bureaucrat(const Bureaucrat &copie);
	~Bureaucrat();

	Bureaucrat&	operator= (const Bureaucrat &model);

	std::string	getName() const;
	int			getGrade() const;

	void	setGrade(const int n_grade);
	void	incrementGrade();
	void	decrementeGrade();

	void	signeForm(Form &f);

	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw() {return "The grade is too high";}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw() {return "The grade is too low";}
	};
};

std::ostream & operator << ( std::ostream &out, const Bureaucrat &b);

#endif

