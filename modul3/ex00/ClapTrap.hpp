#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	std::string name;
	unsigned int	hitPoints;
	unsigned int	energiePoints;
	unsigned int	attackDamage;
 public:
 	ClapTrap (std::string name);
	ClapTrap ();
	ClapTrap (const ClapTrap &copie);
	~ClapTrap ();
	void operator= (const ClapTrap &model);

	void attack(const std::string& target);
	void takeDamage (unsigned int amount);
	void beRepaired (unsigned int amount);

	std::string  retName ();
	unsigned int retHit ();
	unsigned int retEnergie ();
	unsigned int retAtkDmg ();
};

#endif
