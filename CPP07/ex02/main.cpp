#include <iostream>
#include "Array.hpp"

int main()
{
    Array<int> q(6);
    Array<int> empt;
    std::cout << q.size() << std::endl;
    q.printArray();
    std::cout << empt.size() << std::endl;
    
    q[3] = 7;
    q.printArray();

}