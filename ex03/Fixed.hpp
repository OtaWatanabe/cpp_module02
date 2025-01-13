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
	bool operator > (const Fixed &fixed) const;
	bool operator < (const Fixed &fixed) const;
	bool operator >= (const Fixed &fixed) const;
	bool operator <= (const Fixed &fixed) const;
	bool operator == (const Fixed &fixed) const;
	bool operator != (const Fixed &fixed) const;
	Fixed operator + (const Fixed &fixed) const;
	Fixed operator - (const Fixed &fixed) const;
	Fixed operator * (const Fixed &fixed) const;
	Fixed operator / (const Fixed &fixed) const;
	Fixed &operator ++ (void);
	Fixed operator ++ (int);
	Fixed &operator -- (void);
	Fixed operator -- (int);
	~Fixed(void);
	int	getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int	toInt(void) const;
	static Fixed &min(Fixed &fixed1, Fixed &fixed2);
	static Fixed &max(Fixed &fixed1, Fixed &fixed2);
	static const Fixed &max(const Fixed &fixed1, const Fixed &fixed2);
	static const Fixed &min(const Fixed &fixed1, const Fixed &fixed2);
};

std::ostream & operator << (std::ostream &out, const Fixed &fixed);

#endif
