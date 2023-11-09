#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{
 public:
 	Ice (std::string const &type);
	Ice ();
	Ice (const Ice &copie);
	~Ice ();

	Ice&	operator= (const Ice &model);
 
	Ice* clone() const;
	void use(ICharacter& target);
};

#endif
