#include "HumanA.hpp"

HumanA::HumanA (const std::string& name , Weapon& weapon) : name(name), weapon(weapon)
{}

void	HumanA::attack ()
{
	std::cout << name << " attacks with their " << weapon.getType() << "\n";
}

HumanA::~HumanA () {}
