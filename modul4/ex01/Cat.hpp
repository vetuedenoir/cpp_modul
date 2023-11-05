#ifndef CAT_HPP
# define CAT_HPP

# include <cstdlib>
# include <ctime>
# include <string>
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain *brain;
 public:
	Cat();
	Cat(const Cat &copie);
	~Cat();
	
	Cat&	operator= (const Cat &model);
	
	void	makeSound () const;
	void	think ();
	void	displayIdeas() const;
};

#endif
