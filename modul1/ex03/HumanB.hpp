#include <iostream>
#include <string.h>
#include "Weapon.hpp"

#ifndef HUMANB_HPP
# define HUMANB_HPP

class HumanB 
{
private:
	const std::string name;
	Weapon *weapon;
 public:
 	HumanB (const std::string name);
	void setWeapon(Weapon &weapon);
	void attack ();
	~HumanB ();
};

#endif

