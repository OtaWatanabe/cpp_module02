#include "Point.hpp"

Point::Point(void) : x_(0), y_(0) {
	// std::cout << "Point: default constructor called" << std::endl;
}

Point::Point(float x, float y) : x_(x), y_(y) {
	// std::cout << "Point: float constructor called" << std::endl;
}

Point::Point(const Fixed &x, const Fixed &y) : x_(x), y_(y) {
	// std::cout << "Point: float constructor called" << std::endl;
}

Point::Point(const Point &p) : x_(p.get_x()), y_(p.get_y()) {
	// std::cout << "Point: copy constructor called" << std::endl;
}

Point	&Point::operator = (const Point &p) {
	// std::cout << "Point: copy assingment operator called" << std::endl;
	(void)p;
	return *this;
}

Point::~Point(void) {
	// std::cout << "Point: destructor called" << std::endl;
}

Point Point::operator - (const Point &p) const {
	return (Point(x_ - p.get_x(), y_ - p.get_y()));
}

Fixed	Point::operator * (const Point &fixed) const {
	return (x_ * fixed.get_y() - y_ * fixed.get_x());
}

Fixed	Point::get_x(void) const {
	return x_;
}

Fixed	Point::get_y(void) const {
	return y_;
}
