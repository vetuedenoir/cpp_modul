#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{	
		std::cout << "Error: could not open the file." << std::endl;
		return 1;
	}
	std::string	arg(av[1]);
	try{
		BitcoinExchange exchange;
		exchange.processe_imput(arg);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return (0);
	
}