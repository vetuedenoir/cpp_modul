#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "constructeur Dog" << std::endl;
}

Dog::Dog(const Dog &copie) : Animal()
{
	*this = copie;
}

Dog::~Dog()
{
	std::cout << "destructeur Dog" << std::endl;
}
	
Dog&	Dog::operator= (const Dog &model)
{
	type = model.type;
	return *this;
}
	
void	Dog::makeSound () const
{
	std::cout << "Woof Woooof " << std::endl;
}

