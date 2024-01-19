#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include "AForm.hpp"

# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm
{
	RobotomyRequestForm();
	std::string	target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm &copie);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator= (const RobotomyRequestForm &model);

	std::string	getTarget();

	void	execute(const Bureaucrat &executor) const;

};

#endif