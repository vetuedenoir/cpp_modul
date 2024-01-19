
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

void	Bureaucrat::signeForm (AForm &f)
{
	try
	{
		f.beSigned(*this);
		std::cout << name << " signed " << f.getName() << std::endl; 
	}
	catch(const std::exception& e)
	{
		std::cerr <<  name << " couldn't sign " << f.getName() << \
			" because " << e.what() << '\n';
	}
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade();
	return out;
}
