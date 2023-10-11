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
    
    void operator= (const Point &copie);
 
    void  printPoint() const;
    /*Fixed getX();
    Fixed getY();*/
};

#endif