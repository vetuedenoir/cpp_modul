#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon	&weapon;
 public:
 	HumanA (std::string, Weapon &a);
	void attack (void);
};

#endif
