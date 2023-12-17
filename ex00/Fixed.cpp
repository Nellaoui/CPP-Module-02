#include "Fixed.hpp"

Fixed::Fixed(/* args */)
{
	this->fixedPoint = 0;
	std::cout << "Default constructor" << std::endl;
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

Fixed &Fixed::operator=(const Fixed &copyAssigment)
{
	if (this != &copyAssigment)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		this->fixedPoint = copyAssigment.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPoint);
}

void	Fixed::setRawBits(int const fixedPoint )
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPoint = fixedPoint;
}
