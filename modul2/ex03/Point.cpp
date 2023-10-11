#include "Point.hpp"

Point::Point()
{}

Point::Point(const float n1, const float n2) : x(n1), y(n2)
{}

 Point::Point (const Point &copie)
 {
    *this = copie;
 }

Point::~Point () {}

Point&	Point::operator= (const Point &copie)
{
    (Fixed)x = (Fixed)copie.x;
    (Fixed)y = (Fixed)copie.y;
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

