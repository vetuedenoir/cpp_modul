#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
 public:
	Dog();
	Dog(const Dog &copie);
	~Dog();
	
	Dog&	operator= (const Dog &model);
	
	void	makeSound () const;
};

#endif
