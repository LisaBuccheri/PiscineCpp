#include <iostream>
#include "Point.hpp"
#include "Fixed.hpp"

int main( void )
{
    {
        Point a(1, 3);
        Point b(1, 1);
        Point c(4, 1);
        Point p(1, 2);
        Point p1(2, 2);
        Point p2(4, 3);

        std::cout << bsp(a, b, c, p) << std::endl;
        std::cout << bsp(a, b, c, p1) << std::endl;
        std::cout << bsp(a, b, c, p2) << std::endl;
    }
    return 0;
}