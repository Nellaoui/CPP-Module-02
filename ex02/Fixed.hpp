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
		///////////////COMPARISON///////////////
	bool operator>(const Fixed &arg) const;
	bool operator<(const Fixed &arg) const;
	bool operator>=(const Fixed &arg) const;
	bool operator<=(const Fixed &arg) const;
	bool operator==(const Fixed &arg) const;
	bool operator!=(const Fixed &arg) const;
	///////////////ARITHMETIC///////////////
	Fixed operator+(const Fixed &arg) const;
	Fixed operator-(const Fixed &arg) const;
	Fixed operator*(const Fixed &arg) const;
	Fixed operator/(const Fixed &arg) const;
	/////////////// INCREMENT // DECREMENT ///////////////
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);
	/////////////// PUBLIC OVERLOADED ///////////////

	static const Fixed &min(const Fixed &a, const Fixed &b);
	static  Fixed &min( Fixed &a,  Fixed &b);
	static const Fixed &max(const Fixed &a, const Fixed &b);
	static  Fixed &max( Fixed &a,  Fixed &b);

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);


#endif

