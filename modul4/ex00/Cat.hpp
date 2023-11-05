#ifndef CAT_HPP
# define CAT_HPP

# include <string>
# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
 public:
	Cat();
	Cat(const Cat &copie);
	~Cat();
	
	Cat&	operator= (const Cat &model);
	
	void	makeSound () const;
};

#endif
