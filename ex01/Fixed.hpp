#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int fixedPoint;
	const static int fractional = 8;
public:
	Fixed(/* args */);
	Fixed(const Fixed &copy);
	Fixed &operator=(const Fixed &copyAssignment);
	~Fixed();

	Fixed(const int integer);
	Fixed(const float floatNumber);

	int getRawBits( void ) const;
	void setRawBits (int const fixedPoint);

	float toFloat( void ) const;
	int toInt( void ) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif

