#ifndef DOG_HPP
# define DOG_HPP

# include <cstdlib>
# include <ctime>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	Brain *brain; 
 public:
	Dog();
	Dog(const Dog &copie);
	~Dog();
	
	Dog&	operator= (const Dog &model);
	
	void	makeSound () const;
	void	think ();
	void	displayIdeas() const;
};

#endif
