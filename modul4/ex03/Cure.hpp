#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
 public:
 	Cure (std::string const &type);
	Cure ();
	Cure (const Cure &copie);
	~Cure ();

	Cure&	operator= (const Cure &model);
 
	Cure* clone() const;
	void use(ICharacter& target);
};

#endif
