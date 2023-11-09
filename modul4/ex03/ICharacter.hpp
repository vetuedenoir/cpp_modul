#ifndef ICharacter_HPP
# define ICharacter_HPP

# include <string>
# include <iostream>

class ICharacter
{
	std::string name;

 public:
//	ICharacter (std::string &name);
	//virtual ICharacter (const ICharacter &copy);
	virtual ~ICharacter() {}

//	virtual ICharacter& operator= (const ICharacter &model);

	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
