#include "ClapTrap.hpp"

int	main()
{
	int	i = 0;
	const ClapTrap genesis ("First of all");
	ClapTrap a (genesis);
	ClapTrap b ("Benoit");
	ClapTrap c ("Clapoteur");
	ClapTrap d;
	d = c;

	std::cout << std::endl;

	a.attack(b.retName());
	b.takeDamage(0);
	c.attack(b.retName());
	b.takeDamage(0);

	
	std::cout << "\na big men help  " << d.retName() << " at attacking "
	<< a.retName() << std::endl;
	while (i < 11)
	{
		d.attack(a.retName());
		a.takeDamage(1);
		i++;
	}
	std::cout << std::endl;
	a.beRepaired(5);
}
