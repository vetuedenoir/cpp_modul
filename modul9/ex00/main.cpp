#include "BitcoinExchange.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2)
	{	
		std::cout << "Error: could not open the file." << std::endl;
		return -1;
	}
	std::string data_base("data.csv");
	std::string	arg(av[1]);
	try{
		BitcoinExchange exchange(data_base);
		exchange.processe_imput(arg);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	(void)av;
	return (0);
	
}