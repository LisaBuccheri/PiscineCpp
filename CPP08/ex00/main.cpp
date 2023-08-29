#include "easyfind.hpp"

int main()
{
    std::list<int> lst;
    lst.push_back(23);
    lst.push_back(17);
    lst.push_back(98);
    lst.push_back(45);
    lst.push_back(43);

    printArray(lst);
    std::cout << "find: " << easyfind(lst, 98) << std::endl;
    std::cout << "find: " << easyfind(lst, 99) << std::endl;

    std::list<int> vect;
    vect.push_back(6);
    vect.push_back(87);
    vect.push_back(18);
    vect.push_back(49);
    vect.push_back(36);

    printArray(vect);
    std::cout << "find: " << easyfind(vect, 8) << std::endl;
    std::cout << "find: " << easyfind(vect, 49) << std::endl;
}