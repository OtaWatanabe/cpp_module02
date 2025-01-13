#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point) {
	Fixed f1((b - a) * (point - a));
	Fixed f2((c - b) * (point - b));
	Fixed f3((a - c) * (point - c));

	return ((Fixed(0) < f1 && Fixed(0) < f2 && Fixed(0) < f3) || (f1 < Fixed(0) && f2 < Fixed(0) && f3 < Fixed(0)));
}
