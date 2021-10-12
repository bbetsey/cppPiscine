#include <iostream>
#include "Point.hpp"

float	sign( const Point a, const Point b, const Point c ) {
	return (a.getX() - c.getX()) * (b.getY() - c.getY()) - (b.getX() - c.getX()) * (a.getY() - c.getY());
}

bool	bsp( const Point a, const Point b, const Point c, const Point point ) {
	float	d1, d2, d3;
	bool	neg, pos;

	d1 = sign(point, a, b);
	d2 = sign(point, b, c);
	d3 = sign(point, c, a);

	std::cout << "getX: " << b.getX() << std::endl;

	std::cout << "d1: " << d1 << std::endl;
	std::cout << "d2: " << d2 << std::endl;
	std::cout << "d3: " << d3 << std::endl;

	neg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	pos = (d1 > 0) || (d2 > 0) || (d3 > 0);

	return !(neg && pos);
}
