#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
 	int			nombre;
 	static const int	nbBitsFractionnaire = 8;
 public:
 	Fixed ();
	Fixed (const int nb);
	Fixed (const float nb);
 	Fixed (const Fixed &copie);
 	void	operator=(const Fixed &model);
	
 	~Fixed ();
 	int	getRawBits ( void ) const;
 	void	setRawBits (int const raw);
	float	toFloat (void) const;
	int		toInt(void) const;
};

std::ostream & operator << ( std::ostream &out, const Fixed &n);

#endif
