#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const float n1, const float n2) : x(n1), y(n2) {}

 Point::Point (const Point &copie): x(copie.retX()), y(copie.retY())
 {}

Point::~Point () {}

Point&	Point::operator= (const Point &copie)
{
    (Fixed)x = (Fixed)copie.retX();
    (Fixed)y = (Fixed)copie.retY();
	return *this;
}

void    Point::printPoint() const
{
    std::cout << "x = " << x << " et y = " << y << std::endl; 
}

float	Point::getX() const
{
	return x.toFloat();
}

float	Point::getY() const
{
	return y.toFloat();
}

Fixed	Point::retX() const
{
	return x;
}
Fixed	Point::retY() const
{
	return y;
}
	
