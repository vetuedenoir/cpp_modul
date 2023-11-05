#include "Animal.hpp"

Animal::Animal() : type("not define")
{
	std::cout << "constructeur Animal" << std::endl;
}

Animal::Animal(const Animal &copie)
{
	std::cout << "constructeur copie Animal" << std::endl;
	*this = copie;
}

Animal::~Animal()
{
	std::cout << "destucteur Animal" << std::endl;
}
	
Animal&	Animal::operator= (const Animal &model)
{
	type = model.type;
	return *this;
}
	
void	Animal::makeSound () const
{
	std::cout << "..." << std::endl;
}

std::string Animal::getType() const
{
	return type;
}

