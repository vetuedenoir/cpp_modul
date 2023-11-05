#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("not define")
{
	std::cout << "constructeur WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copie)
{
	*this = copie;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "destucteur WrongAnimal" << std::endl;
}
	
WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &model)
{
	type = model.type;
	return *this;
}
	
void	WrongAnimal::makeSound () const
{
	std::cout << "..." << std::endl;
}

std::string WrongAnimal::getType() const
{
	return type;
}
