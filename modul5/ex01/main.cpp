
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <string>

int	main()
{
	Bureaucrat boby("Boby", 101);
	Bureaucrat macron("Macron", 1);
	Bureaucrat brigitte("Brigitte", 150);

	try
	{
		Form docu("testament", 100, 105);
		//Form docu("testament", 10, 0);
		std::cout << docu << std::endl;
		try
		{
			boby.signeForm(docu);
			macron.signeForm(docu);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			brigitte.signeForm(docu);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << docu << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}
