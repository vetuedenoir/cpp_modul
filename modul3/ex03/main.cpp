#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	int	i = 0;
	const ScavTrap genesis ("First of all");
	ScavTrap a (genesis);
	ScavTrap b ("Benoit");
	ScavTrap c ("Clapoteur");
	ScavTrap d ("Escavator");

	std::cout << std::endl;

	d.guardGate();
	d.guardGate();
	a.attack(b.retName());
	b.takeDamage(20);
	c.attack(b.retName());
	b.takeDamage(20);

	
	std::cout << "\n" << d.retName() << " is attacking "
	<< a.retName() << std::endl;
	while (i < 2)
	{
		d.attack(a.retName());
		a.takeDamage(20);
		i++;
	}
	std::cout << std::endl;
	a.beRepaired(5);
}