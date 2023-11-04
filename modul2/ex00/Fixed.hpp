#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
 	int			nombre;
 	static const int	nbBitsFractionnaire = 8;
 public:
 	Fixed ();
 	Fixed (const Fixed &copie);
 	Fixed&	operator=(const Fixed &model);
	
	~Fixed ();
	int	getRawBits ( void ) const;
 	void	setRawBits (int const raw);
};

#endif

