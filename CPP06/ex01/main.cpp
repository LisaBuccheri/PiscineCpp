#include "Data.hpp"
#include <iostream>

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

int main()
{
    Data ptr("Here we go");
    uintptr_t ser;
    Data* des;
    
    std::cout << "STR: " << ptr.getStr() << std::endl;
    
    
    ser = serialize(&ptr);
    std::cout << "after ser: " << ser << std::endl;

    des = deserialize(ser);
    std::cout << "after des: " << des->getStr() << std::endl;
}