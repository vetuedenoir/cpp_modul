#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int	main()
{
	DiamondTrap dd("D'Artagnan");
	
	dd.guardGate();
	dd.highFivesGuys();
	dd.attack("Dumas");
	dd.whoAmI();

	return 0;
}
