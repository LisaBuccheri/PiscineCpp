#include "Data.hpp"

Data::Data() : _str(0)
{
    return ;
}

Data::Data(std::string str) : _str(str)
{
    return ;
}


Data::Data(Data const &cpy)
{
    this->_str = cpy._str;

    return ;
}

Data::~Data()
{
    return ;
}

Data& Data::operator=(Data const &cpy)
{
    this->_str = cpy._str;

    return (*this);
}

std::string Data::getStr()
{
    return (this->_str);
}

