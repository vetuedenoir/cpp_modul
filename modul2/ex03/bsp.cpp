#include "Point.hpp"

float signe(Point const p1, Point const p2, Point const p3)
{
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	bool b1 = signe(pt, a, b) < 0.0f;
	bool b2 = signe(pt, b, c) < 0.0f;
	bool b3 = signe(pt, c, a) < 0.0f;

	return ((b1 == b2) && (b2 == b3));
}