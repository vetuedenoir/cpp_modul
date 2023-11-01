#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTRap, public FragTrap
{
	std::string name;
 public:
 	DiamondTrap (std::string name);
	DiamondTrap (const DiamondTrap &copie);
	DiamondTrap ();
	~DiamondTrap ();

	void operator= (const DiamondTrap &model);
	void attack(const std::string& target);
	
	void whoAmI ();
};

#endif

