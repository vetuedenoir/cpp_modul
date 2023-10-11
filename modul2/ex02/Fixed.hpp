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
 	~Fixed ();

 	int	getRawBits ( void ) const;
 	void	setRawBits (int const raw);
	float	toFloat (void) const;
	int		toInt(void) const;

	void	operator=(const Fixed &model);
	bool	operator>(const Fixed &other) const;
	bool	operator<(const Fixed &other) const;
	bool	operator>=(const Fixed &other) const;
	bool	operator<=(const Fixed &other) const;
	bool	operator==(const Fixed &other) const;
	bool	operator!=(const Fixed &other) const;

	Fixed	operator+(const Fixed &other) const;
	Fixed	operator-(const Fixed &other) const;
	Fixed	operator*(const Fixed &other) const;
	Fixed	operator/(const Fixed &other) const;

	Fixed&	operator++();
	Fixed&	operator--();
	Fixed	operator++(int);
	Fixed	operator--(int);

	static Fixed&		min (Fixed &n1, Fixed &n2);
	static const Fixed&	min (const Fixed &n1, const Fixed &n2);
	static Fixed&		max (Fixed &n1, Fixed &n2);
	static const Fixed&	max (const Fixed &n1, const Fixed &n2);

};

std::ostream & operator << ( std::ostream &out, const Fixed &n);

#endif
