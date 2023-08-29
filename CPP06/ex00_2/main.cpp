#include <iostream>
#include "Convert.hpp"

int main(int argc, char** argv)
{
    if (argc != 2)
    {
        std::cout << "bad arguments!" << std::endl;
        return (0);
    }

    Convert c(argv[1]);
    std::cout << c;  
}