#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	PresidentialPardonForm();
	std::string	target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm &copie);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator= (const PresidentialPardonForm &model);

	std::string	getTarget();

	void	execute(const Bureaucrat &executor) const;

};

#endif