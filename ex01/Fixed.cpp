#include "Fixed.hpp"

Fixed::Fixed(void) : value_(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const value) : value_(value << fraction_) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const value) : value_((int)std::roundf(value * (float)(1 << fraction_))) {
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed &Fixed::operator = (const Fixed &fixed) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed) {
		this->value_ = fixed.getRawBits();
	}
	return *this;
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
}

std::ostream & operator << (std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

int	Fixed::getRawBits(void) const {
	return value_;
}

void	Fixed::setRawBits(int const raw) {
	value_ = raw;
}

float	Fixed::toFloat(void) const {
	return (float)value_ / (float)(1 << fraction_);
}

int	Fixed::toInt(void) const {
	return value_ >> fraction_;
}
