#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm () : \
	AForm("RobotomyRequestForm", 25, 5), target("")
{
	srand (time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm (std::string target) : \
	AForm("RobotomyRequestForm", 25, 5), target(target)
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

	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		if (random % 2)
			std::cout <<  target << " has been robotomized successfully" << std::endl;
		else
			std::cout << "Robotomy failed" << std::endl;
	}
}