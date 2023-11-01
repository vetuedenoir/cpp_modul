#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
	Fixed const	x;
	Fixed const	y;

 public:
	Point ();
	Point (const float x, const float y);
	Point (const Point &copie);
	~Point ();
    
	Point& operator= (const Point &copie);
 
	void  printPoint() const;
	float getX() const;
	float getY() const;
	Fixed retX() const;
	Fixed retY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
