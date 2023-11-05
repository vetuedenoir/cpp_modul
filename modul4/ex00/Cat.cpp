#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "constructeur Cat" << std::endl;
}

Cat::Cat(const Cat &copie) : Animal()
{
	*this = copie;
}

Cat::~Cat()
{
	std::cout << "destructeur Cat" << std::endl;
}
	
Cat&	Cat::operator= (const Cat &model)
{
	type = model.type;
	return *this;
}
	
void	Cat::makeSound () const
{
	std::cout << "Miiaouuu " << std::endl;
}

