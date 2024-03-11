#include "Fixed.hpp"

Fixed::Fixed(void): fixedPoint(0)
{
	//std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
	//std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed::Fixed(const int& fpValue)
{
	//std::cout << "Int constructor called" << std::endl;
	fixedPoint = fpValue << fractionalBits;
}

Fixed::Fixed(const float& fpValue)
{
	//std::cout << "Float constructor called" << std::endl;
	fixedPoint = roundf(fpValue * (1 << fractionalBits));
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& src)
{
	//std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPoint = src.getRawBits();
    
    return *this;
}

int Fixed::getRawBits(void)const
{
    return fixedPoint;
}

void Fixed::setRawBits(int const raw)
{
    this->fixedPoint = raw;
}

int		Fixed::toInt(void)const
{
	return (fixedPoint >> fractionalBits);
}

float	Fixed::toFloat(void)const
{
	return (((float)fixedPoint) / (float)(1 << fractionalBits));
}

std::ostream& operator << ( std::ostream& os, const Fixed& src )
{
	os << src.toFloat();
	return (os);
}

Fixed Fixed::operator + (const Fixed& src)
{
    Fixed result;

    result.setRawBits(this->fixedPoint + src.getRawBits());
    result.toFloat();
    return (result);
}

Fixed Fixed::operator - (const Fixed& src)
{
    Fixed result;

    result.setRawBits(this->fixedPoint - src.getRawBits());
    result.toFloat();
    return (result);
}

Fixed Fixed::operator * (const Fixed& src)
{
    Fixed result;

    result.setRawBits((this->fixedPoint * src.getRawBits()) >> fractionalBits);
    result.toFloat();
    return (result);
}

Fixed Fixed::operator / (const Fixed& src)
{
    Fixed result;

    result.setRawBits((this->fixedPoint << fractionalBits) / src.getRawBits());
    result.toFloat();
    return (result);
}

Fixed& Fixed::operator ++ (void)
{
    this->fixedPoint++;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed temp(*this);
    this->fixedPoint++;
    return (temp);
}

Fixed& Fixed::operator -- (void)
{
    this->fixedPoint--;
    return (*this);
}

Fixed Fixed::operator -- (int)
{
    Fixed temp(*this);
    this->fixedPoint--;
    return (temp);
}

bool Fixed::operator > (const Fixed& src)
{
    return (this->fixedPoint > src.getRawBits());
}

bool Fixed::operator < (const Fixed& src)
{
    return (this->fixedPoint < src.getRawBits());
}

bool Fixed::operator >= (const Fixed& src)
{
    return (this->fixedPoint >= src.getRawBits());
}

bool Fixed::operator <= (const Fixed& src)
{
    return (this->fixedPoint <= src.getRawBits());
}

bool Fixed::operator == (const Fixed& src)
{
    return (this->fixedPoint == src.getRawBits());
}

bool Fixed::operator != (const Fixed& src)
{
    return (this->fixedPoint != src.getRawBits());
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() < b.getRawBits())
        return (a);
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.getRawBits() > b.getRawBits())
        return (a);
    return (b);
}
