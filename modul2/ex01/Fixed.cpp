#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	nombre = 0;
}

Fixed::Fixed (const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	nombre = nb << nbBitsFractionnaire;;
}

Fixed::Fixed (const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	nombre = roundf(nb * (1 << nbBitsFractionnaire));
//	std::cout << "nb = " << nb << std::endl;
//	std::cout << "LE Float " << nombre / 256  << "." << ( nombre % 256 * 1000000 / 256) << std::endl;
	//std::cout << "normal " << nombre << std::endl;
}

Fixed::Fixed (const Fixed &copie)
{
	std::cout << "Copy constructor called" << std::endl;
	this->nombre = copie.getRawBits();
}

void	Fixed::operator=(const Fixed &model)
{
	std::cout << "Copy assignment operator called" << std::endl;
	setRawBits(model.getRawBits());
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits (void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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
