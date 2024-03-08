#include "Fixed.hpp"

Fixed::Fixed(void): fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::~Fixed( void )
{
	std::cout << "Default destructor called" << std::endl;
}

Fixed& Fixed::operator = ( const Fixed& src )
{
	std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = src.getRawBits();
    
    return *this;
}

int Fixed::getRawBits(void)const
{
    std::cout << "getRawBits member function called" << std::endl;
    return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}