#include <iostream>
#include "Fixed.hpp"

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5 ) * Fixed( 2 ) );
Fixed const c( Fixed( 5.5f ) / Fixed( 2 ) );
Fixed const d( Fixed( 5.5f ) + Fixed( 2.5f ) );
Fixed const e( Fixed( 5 ) - Fixed( 2 ) );

std::cout << b << std::endl;
std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << e << std::endl;

std::cout << std::endl;

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << std::endl;

std::cout << "max from " << d << " and " << b << " is: " <<  Fixed::max( d, b ) << std::endl;
std::cout << "min from " << d << " and " << e << " is: " <<  Fixed::min( d, e ) << std::endl;



return 0;
}
