#include <iostream>
#include "Fixed.hpp"

int main( void )
{
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
Fixed const c( Fixed( 5.5f ) / Fixed( 2 ) );
Fixed const d( Fixed( 5 ) + Fixed( 2 ) );
Fixed const e( Fixed( 5 ) - Fixed( 2 ) );

std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;

std::cout << "max from " << a << " and " << b << " is -> " <<  Fixed::max( a, b ) << std::endl;
std::cout << "min from " << d << " and " << e << " is -> " <<  Fixed::min( d, e ) << std::endl;

std::cout << b << std::endl;
std::cout << c << std::endl;
std::cout << d << std::endl;
std::cout << e << std::endl;

return 0;
}
