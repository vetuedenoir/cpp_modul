
#include "FragTrap.hpp"

FragTrap::FragTrap () : ClapTrap()
{
	hitPoints = 100;
	energiePoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap DEFAULT CONSTUCTOR is born." << std::endl;
}


FragTrap::FragTrap (std::string name) : ClapTrap(name)
{
	hitPoints = 100;
	energiePoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " is born." << std::endl;
}

FragTrap::FragTrap (const FragTrap &copie) : ClapTrap(copie)
{
	hitPoints = 100;
	energiePoints = 100;
	attackDamage = 30;
	*this = copie;
	std::cout << "FragTrap copie " << name << " is born." << std::endl;
}

FragTrap::~FragTrap ()
{
	std::cout << "FragTrap " << name << " as died." << std::endl;
}

void    FragTrap::highFivesGuys ()
{
    std::cout << "FragTrap " << name << " request a high five !" <<  std::endl;
}

void	FragTrap::operator= (const FragTrap &model)
{
	name = model.name;
	hitPoints = model.hitPoints;
	energiePoints = model.energiePoints;
	attackDamage = model.attackDamage;
}

void	FragTrap::attack (const std::string& target)
{
	if (energiePoints > 0)
	{
		std::cout << "FragTrap " << name << " attacks " << target
			<< ", causing " << attackDamage << " points of damage!"
			<< std::endl;
		--energiePoints;
	}
	else
		std::cout << "FragTrap " << name << " as not enough energie to attack "
			<< target << "!" << std::endl;
}