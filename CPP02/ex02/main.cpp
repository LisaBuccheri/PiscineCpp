#include <iostream>
#include "Fixed.hpp"

int main( void )
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

    Fixed c(Fixed( 2 ));
    Fixed d(Fixed( 3 ));
    
    //19 test
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    //test perso
    std::cout << "Personal test." << std::endl;
    std::cout << c << std::endl;
    std::cout << d << std::endl;

    // operateur de comparaison
    std::cout << "Comparison operator." << std::endl;
    std::cout << (c < d) << std::endl;
    std::cout << (c > d) << std::endl;
    std::cout << (c <= d) << std::endl;
    std::cout << (c >= d) << std::endl;
    std::cout << (c == d) << std::endl;
    std::cout << (c != d) << std::endl;

    //operateur arithmetique
    std::cout << "Arithmetic comparator." << std::endl;
    std::cout << c + d << std::endl;
    std::cout << c - d << std::endl;
    std::cout << c * d << std::endl;
    std::cout << c / d << std::endl;
    
    return 0;
}