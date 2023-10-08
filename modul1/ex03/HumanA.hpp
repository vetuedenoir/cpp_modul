#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <string.h>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	const std::string name;
	Weapon&	weapon;
 public:
 	HumanA (const std::string& name , Weapon& a);
	void attack ();
	~HumanA();
};

#endif
