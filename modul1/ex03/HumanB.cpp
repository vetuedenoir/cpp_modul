#include "HumanB.hpp"

HumanB::HumanB (const std::string name) : name(name)
{
	weapon = nullptr;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack ()
{
	if (weapon != nullptr)
		std::cout << name << " attacks with their " << weapon->getType() << "\n";
	else
		std::cout << name << " attacks with no weapon\n";
}

HumanB::~HumanB ()
{

}
