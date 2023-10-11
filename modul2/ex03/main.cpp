#include "Point.hpp"

float signe(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool b1 = signe(point, a, b) < 0.0f;
	bool b2 = signe(point, b, c) < 0.0f;
	bool b3 = signe(point, c, a) < 0.0f;

	return ((b1 == b2) && (b2 == b3) && b1 == true);
}

int main()
{
    Point p (3.86f, 2.98f);
    Point n (30.5f, 55.5f);
    Point t1 (2.3f, 3.1f);
    Point t2 (4.0f, 5.0f);
    Point t3 (7.0f, 1.0f);

    if (bsp(t1, t2, t3, p))
        std::cout << "Le point est dans le triangle!!!!" << std::endl;
    else
        std::cout << "Le point n est pas dans le triangle" << std::endl;
}