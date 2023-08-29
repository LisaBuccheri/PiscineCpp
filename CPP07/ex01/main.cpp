#include <iostream>
#include "iter.hpp"

void    isOdd(int const & nb)
{
    if (nb % 2 == 0)
        std::cout << "this number is even: " << nb << std::endl;
    else
        std::cout << "this number is odd: " << nb << std::endl;
}

int main()
{
    int tab[] = {19, 34, 45, 97, 23, 20, 1, 76, 98, 65};
    iter<int>(tab, 10, isOdd);
}