#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point {
private:
	const Fixed	x_;
	const Fixed	y_;

public:
	Point(void);
	Point(float x, float y);
	Point(const Fixed &x, const Fixed &y);
	Point(const Point &p);
	Point &operator = (const Point &p);
	~Point(void);
	Point operator - (const Point &p) const;
	Fixed get_x(void) const;
	Fixed get_y(void) const;
	Fixed operator * (const Point &p) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif
