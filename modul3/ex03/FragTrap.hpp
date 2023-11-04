#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
 public:
	FragTrap ();
	FragTrap (std::string name);
	FragTrap (const FragTrap &copie);
	~FragTrap ();

	FragTrap& operator= (const FragTrap &model);
	
	void attack (const std::string& target);
	void highFivesGuys ();
};

#endif
