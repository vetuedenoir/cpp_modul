#include <iostream>
#include <string>
#include "Weapon.hpp"

int	main(void)
{
	Weapon club ("spiky club");
	std::cout << club.getType() << "\n";
	club.setType("couteau de chasse");
	std::cout << club.getType();

}
