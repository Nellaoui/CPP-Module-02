#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	std::cout << "Default constructor called" << std::endl;
	this->fixedPoint = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed &Fixed::operator=(const Fixed &copyAssignment)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &copyAssignment)
	{
		this->fixedPoint = copyAssignment.getRawBits();
	}
	return *this;
}

int	Fixed::getRawBits( void ) const
{
	return this->fixedPoint;
}

void Fixed::setRawBits(const int fixedPoint)
{
	this->fixedPoint = fixedPoint;
}

Fixed::Fixed(const int integer)
{
	std::cout << "int Constructor Called" << std::endl;
	this->fixedPoint = integer * (1 << this->fractional);
	// this->fixedPoint = integer * power(2 * this->fractional);
}

Fixed::Fixed(const float floatNumber)
{
	std::cout << "float Constructor Called" << std::endl;
	this->fixedPoint =  std::roundf(floatNumber * (1 << this->fractional));
}

float Fixed::toFloat( void ) const
{
	return ((float)this->fixedPoint / (1 << this->fractional));
}

int Fixed::toInt( void ) const
{
	return ((int)this->fixedPoint / (1 << this->fractional));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
