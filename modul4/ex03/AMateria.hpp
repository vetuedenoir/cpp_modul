#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
 protected:
	std::string type;
 public:
	AMateria (std::string const &type);
	AMateria (const AMateria &copie);
	virtual ~AMateria ();

	AMateria&	operator= (const AMateria &model);

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif