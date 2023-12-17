#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int	fixedPoint;
	const static int fractional = 8;
public:
	// default constructor
	Fixed(/* args */);
	// copy constructor
	Fixed (const Fixed &copy);
	// copy  Assignemnet constructor
	Fixed &operator=(const Fixed &copyAssigment);
	// Destructor
	~Fixed();

	int getRawBits( void ) const;
	void	setRawBits (int const fixedPoint );
};

#endif
