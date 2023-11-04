#include "Fixed.hpp"

Fixed::Fixed ()
{
	std::cout << "Default constructor called" << std::endl;
	nombre = 0;
}

Fixed::Fixed (const Fixed &copie)
{
	std::cout << "Copy constructor called" << std::endl;
	this->nombre = copie.getRawBits();
}

Fixed&	Fixed::operator=(const Fixed &model)
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


