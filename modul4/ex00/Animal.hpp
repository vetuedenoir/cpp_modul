#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
 protected:
	std::string type;

 public:
	Animal();
	Animal(const Animal &copie);
	virtual ~Animal();
	
	virtual Animal&	operator= (const Animal &model);
	
	virtual void	makeSound () const;
	std::string	getType () const;
};

#endif

