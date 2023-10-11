#include "Point.hpp"

Point::Point() {}

Point::Point(const float n1, const float n2)
{
    x (n1);
    y (n2);
}

 Point::Point (const Point &copie)
 {
    this = copie;
 }

Point::~Point () {}

void    Point::operator= (const Point &copie)
{
    this->x = copie.x;
    this->y = copie.y;
}

void    Point::PrintPoint() const
{
    std::cout << "x = " << x " et y = " << y << std::endl; 
}