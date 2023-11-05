#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <string>
# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
 public:
	WrongCat();
	WrongCat(const WrongCat &copie);
	~WrongCat();
	
	WrongCat&	operator= (const WrongCat &model);
	
	void	makeSound () const;
};

#endif
