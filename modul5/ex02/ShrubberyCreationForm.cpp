#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm () : \
	AForm("ShrubberyCreationForm", 25, 5), target("") {}

ShrubberyCreationForm::ShrubberyCreationForm (std::string target) : \
	AForm("ShrubberyCreationForm", 25, 5), target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &copie) : \
	AForm(copie.getName(), copie.getGradeSigne(), copie.getGradeExec(), copie.getIsSigned())   
{
	*this = copie;
}

ShrubberyCreationForm::~ShrubberyCreationForm () {}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm &model)
{
	target = model.target;
	return *this;
}

std::string	ShrubberyCreationForm::getTarget ()
{
	return target;
}

void	ShrubberyCreationForm::execute (const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getGradeExec())
		throw Bureaucrat::GradeTooLowException();
	else
	{
		// creer un fichier dans le repo avec un arrbre ascci
		std::string	name_fichier("arbre");

		std::ofstream fichier (name_fichier.c_str());
		if (!fichier.is_open())
		{
			std::cerr << "Erreur: impossible de creer le fichier " << name_fichier << "\n";
			fichier.close();
			return ;
		}
fichier << "          *\n"\
<<"         *.*\n"\
<<"        *...*\n"\
<<"       *.....*\n"\
<<"      *.......*\n"\
<<"     *.........*\n"\
<<"    *...........*\n"\
<<"   *.............*\n"\
<<"  *...............*\n"\
<<" *.................*\n" << std::endl;
	}
}

