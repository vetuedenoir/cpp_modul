#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap (std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name)
{
	ClapTrap::name = name + "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energiePoints = ScavTrap::energiePoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap (const DiamondTrap &copie)
{
	*this = copie;
	std::cout << "DiamondTrap copie " << name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap () : ClapTrap(""), FragTrap(), ScavTrap()
{
	ClapTrap::name = "_clap_name";
	hitPoints = FragTrap::hitPoints;
	energiePoints = ScavTrap::energiePoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap DEFAULT CONSTRUCTOR is born." << std::endl;
}

DiamondTrap::~DiamondTrap ()
{
	std::cout << "DiamondTrap " << name << " as died." << std::endl;
}


void	DiamondTrap::operator= (const DiamondTrap &model)
{
	ClapTrap::name = model.ClapTrap::name;
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI ()
{
	std::cout << "DiamondTrap " << name << " has a ClapTrap name of " << ClapTrap::name << std::endl;
}
