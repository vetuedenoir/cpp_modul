#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "AForm.hpp"

#include <iostream>
#include <fstream>
#include <string>

class ShrubberyCreationForm : public AForm
{
	ShrubberyCreationForm();
	std::string	target;
public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &copie);
	~ShrubberyCreationForm();

	ShrubberyCreationForm& operator= (const ShrubberyCreationForm &model);

	std::string	getTarget();

	void	execute(const Bureaucrat &executor) const;

};

#endif