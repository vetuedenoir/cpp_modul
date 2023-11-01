#include "Fixed.hpp"

Fixed::Fixed ()
{
	nombre = 0;
}

Fixed::Fixed (const int nb)
{
	nombre = nb << nbBitsFractionnaire;;
}

Fixed::Fixed (const float nb)
{
	nombre = roundf(nb * (1 << nbBitsFractionnaire));
}

Fixed::Fixed (const Fixed &copie)
{
	this->nombre = copie.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &model)
{
	setRawBits(model.getRawBits());
	return *this;
}

Fixed::~Fixed() {}

int	Fixed::getRawBits (void) const
{
	return nombre;
}

void	Fixed::setRawBits (int const raw)
{
	nombre = raw;
}

float	Fixed::toFloat (void) const
{
	float x = nombre;
	return (x / (1 << nbBitsFractionnaire));
}

int	Fixed::toInt (void) const
{
	return (nombre >> nbBitsFractionnaire);
}

std::ostream &operator << (std::ostream &out, const Fixed &n)
{
	out << n.toFloat();
	return out;
}

bool	Fixed::operator>(const Fixed &other) const
{
	if (nombre > other.nombre)
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed &other) const
{
	if (nombre < other.nombre)
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed &other) const
{
	if (nombre >= other.nombre)
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed &other) const
{
	if (nombre <= other.nombre)
		return true;
	return false;
}

bool	Fixed::operator==(const Fixed &other) const
{
	if (nombre == other.nombre)
		return true;
	return false;
}

bool	Fixed::operator!=(const Fixed &other) const
{
	if (nombre != other.nombre)
		return true;
	return false;
}


Fixed	Fixed::operator+(const Fixed &other) const
{
	Fixed x(toFloat() + other.toFloat());
	return (x);
}

Fixed	Fixed::operator-(const Fixed &other) const
{
	Fixed x(toFloat() - other.toFloat());
	return (x);
}

Fixed	Fixed::operator*(const Fixed &other) const 
{
	Fixed x(toFloat() * other.toFloat());
	return (x);
}

Fixed	Fixed::operator/(const Fixed &other) const
{
	Fixed x(toFloat() / other.toFloat());
	return (x);
}

Fixed&	Fixed::operator++()
{
	++nombre;
	return *this;
}

Fixed&	Fixed::operator--()
{
	--nombre;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed r (toFloat());
	nombre++;
	return r;
}

Fixed	Fixed::operator--(int)
{
	Fixed r (toFloat());
	nombre--;
	return r;
}

Fixed& Fixed::min (Fixed &n1, Fixed &n2)
{
	if (n1 < n2)
		return n1;
	return n2;
}

const Fixed& Fixed::min (const Fixed &n1, const Fixed &n2)
{
	if (n1 < n2)
		return n1;
	return n2;
}

Fixed& Fixed::max (Fixed &n1, Fixed &n2)
{
	if (n1 > n2)
		return n1;
	return n2;
}

const Fixed& Fixed::max (const Fixed &n1, const Fixed &n2)
{
	if (n1 > n2)
		return n1;
	return n2;
}
