#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed {
private:
	int					value_;
	static const int	fraction_ = 8;

public:
	Fixed(void);
	Fixed(const Fixed &fixed);
	Fixed & operator = (const Fixed &fixed);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif
