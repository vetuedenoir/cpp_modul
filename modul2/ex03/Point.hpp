#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
    const Fixed x;
    const Fixed y;

 public:
    Point ();
    Point (const float, const float);
    Point (const Point &copie);
    ~Point ();
    
    Point& operator= (const Point &copie);
 
    void  printPoint() const;
    float getX() const;
    float getY() const;
};

#endif