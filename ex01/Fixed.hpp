#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed {
private:
	int					value_;
	static const int	fraction_ = 8;

public:
	Fixed(void);
	Fixed(int const value);
	Fixed(float const value);
	Fixed(const Fixed &fixed);
	Fixed & operator = (const Fixed &fixed);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
