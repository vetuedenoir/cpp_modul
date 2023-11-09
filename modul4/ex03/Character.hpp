#ifndef Character_HPP
# define Character_HPP

# include <string>
# include <iostream>

#include "ICharacter.hpp"

class Character : public ICharacter
{
	AMateria	*inventaire[4];
	int			charge;
	std::string	name;

 public:
	Character (std::string &name);
	Character (const Character &copy);
	~Character();

	Character& operator= (const Character &model);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

#endif
