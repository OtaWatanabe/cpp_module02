#include "Point.hpp"

void	printPoint(const Point &p) {
	std::cout << "Point (" << p.get_x() << ", " << p.get_y() << ")"; 
}

void	checkPrint(const Point &a, const Point &b, const Point &c, const Point &d) {
	printPoint(d);
	if (bsp(a, b, c, d)) std::cout << " is in the triangle ";
	else std::cout << " is not in the triangle ";
	printPoint(a);
	std::cout << ", ";
	printPoint(b);
	std::cout << ", ";
	printPoint(c);
	std::cout << std::endl;
}

int	main(void) {
	Point a(0, 0);
	Point b(0, 1);
	Point c(1, 1);
	Point d(3, 2);
	Point e(4, 0.5);

	checkPrint(a, b, c, d);
	checkPrint(a, b, d, c);
	checkPrint(e, a, b, d);
	checkPrint(d, a, e, c);
	checkPrint(d, b, e, c);
}
