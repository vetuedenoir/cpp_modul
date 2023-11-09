#ifndef ICE_HPP
# define ICE_HPP

#include "AMatateria.hpp"

class Ice : public AMateria
{
 public:
 	Ice (std::string const &type);
	Ice (const Ice &copie);
	~Ice ();

	Ice&	operator= (const Ice &model);
 
	Ice* clone() const;
	void use(ICharacter& target);
}

#endif
