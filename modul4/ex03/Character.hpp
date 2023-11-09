#ifndef Character_HPP
# define Character_HPP

# include <string>
# include <iostream>

class Character
{
	Imateria	inventaire[4];
	int			charge;

 public:
	Character (std::string &name);
	Character (const Character &copy);
	~Character() {}

	Character& operator= (const Character &model);

	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, Character& target);
};

#endif
