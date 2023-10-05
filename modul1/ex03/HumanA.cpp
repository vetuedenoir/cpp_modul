#include "HumanA.hpp"

HumanA::HumanA (std::string s, Weapon &a)
{
	name  = s;
	weapon = a;
}

void	HumanA::attack (void)
{
	std::cout << name << " attacks with their " << weapon.getType();
}
