#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	bool mode;
 public:
	ScavTrap ();
	ScavTrap (std::string name);
	ScavTrap (const ScavTrap &copie);
	~ScavTrap ();

	 ScavTrap& operator= (const ScavTrap &model);
	 
	void attack (const std::string& target);
	void guardGate();
};

#endif
