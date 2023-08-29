#include "ABC.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base *generate(void)
{
    Base *ptr;

    srand(time(NULL));

    switch (rand() % 3)
    {
        case 0:
            ptr = new A;
            break ;
        case 1:
            ptr = new B;
            break ;
        case 2:
            ptr = new C;
            break ;
    }

    return (ptr);
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

void identify(Base &r)
{
    try
    {
        dynamic_cast<A &>(r);
        std::cout << "A" << std::endl;
    }
    catch (std::exception &bc)
    {
        std::cout << "Conversion didn't work has excepted: " << bc.what() << std::endl;
    }

    try
    {
        dynamic_cast<B &>(r);
        std::cout << "B" << std::endl;
    }
    catch (std::exception &bc)
    {
        std::cout << "Conversion didn't work has excepted: " << bc.what() << std::endl;
    }
    
    try
    {
        dynamic_cast<C &>(r);
        std::cout << "C" << std::endl;
    }
    catch (std::exception &bc)
    {
        std::cout << "Conversion didn't work has excepted: " << bc.what() << std::endl;
    }
}

int main()
{
    Base *ptrBase = generate();
    Base &refBase = *generate();

    identify(ptrBase);
    identify(refBase);

    delete ptrBase;
    delete &refBase;

    return (0);
}