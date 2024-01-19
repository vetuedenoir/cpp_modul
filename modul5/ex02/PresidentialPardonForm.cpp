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
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		std::cout <<  target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
}


