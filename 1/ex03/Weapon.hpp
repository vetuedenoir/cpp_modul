
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "string"

class Weapon
{
	std::string type;
 public:
 	Weapon (std::string name);
	const std::string &getType (void);
	void setType (std::string name);
};

#endif
