
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <string>


#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat boby("Boby", 101);
	Bureaucrat macron("Macron", 1);
	Bureaucrat brigitte("Brigitte", 150);

	ShrubberyCreationForm ff("Maison de Eya");

	ff.beSigned(macron);
	ff.execute(macron);

	return (0);
}
