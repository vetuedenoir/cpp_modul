#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
 protected:
	std::string type;

 public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &copie);
	~WrongAnimal();
	
	WrongAnimal&	operator= (const WrongAnimal &model);
	
	void	makeSound () const;
	std::string	getType () const;
};

#endif
