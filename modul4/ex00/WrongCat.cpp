#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "constructeur WrongCat" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copie) : WrongAnimal()
{
	*this = copie;
}

WrongCat::~WrongCat()
{
	std::cout << "destructeur WrongCat" << std::endl;
}
	
WrongCat&	WrongCat::operator= (const WrongCat &model)
{
	type = model.type;
	return *this;
}
	
void	WrongCat::makeSound () const
{
	std::cout << "Miiaouuu " << std::endl;
}
