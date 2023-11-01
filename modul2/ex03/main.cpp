#include "Point.hpp"
#include "Fixed.hpp"
#include <iostream>

int main()
{
	Point a(2, 3);
	Point b(1, 4);
	Point c(3, 3);
	Point d(2.98f, 2.19f);
	Point e(30.5f, 55.5f);
    
	Point t1 (1.0f, 1.0f);
	Point t2 (5.0f, 1.0f);
	Point t3 (3.0f, 4.0f);

	if (bsp(t1, t2, t3, a))
		std::cout << "Le point est dans le triangle!!!!" << std::endl;
	else
		std::cout << "Le point n est pas dans le triangle" << std::endl;
	if (bsp(t1, t2, t3, b))
		std::cout << "Le point est dans le triangle!!!!" << std::endl;
	else
		std::cout << "Le point n est pas dans le triangle" << std::endl;
	if (bsp(t1, t2, t3, c))
		std::cout << "Le point est dans le triangle!!!!" << std::endl;
	else
		std::cout << "Le point n est pas dans le triangle" << std::endl;
	if (bsp(t1, t2, t3, d))
		std::cout << "Le point est dans le triangle!!!!" << std::endl;
	else
		std::cout << "Le point n est pas dans le triangle" << std::endl;
	if (bsp(t1, t2, t3, e))
		std::cout << "Le point est dans le triangle!!!!" << std::endl;
	else
		std::cout << "Le point n est pas dans le triangle" << std::endl;
	return 0;
}
