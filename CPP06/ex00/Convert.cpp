#include "Convert.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>
#include <cmath>

Convert::Convert() : _intVal(0), _floatVal(0), _doubleVal(0), _charVal(0)
{
    return ;
}

Convert::Convert(std::string str)
{
    unsigned int nb = 0;

    while (isdigit(str[nb]))
        nb ++;
    
    if (nb == str.length())
        intTo(str);
    else if (str.length() == 1 && isalpha(str[0]) && str[0] != '0')
        charTo(str);
    else if (str.find('f') && str.find('f') != std::string::npos)
    {
        floatTo(str);
    }
    else
        doubleTo(str);
    
    return ;
}

Convert::Convert(Convert const & cpy) : _intVal(cpy._intVal), _floatVal(cpy._floatVal), _doubleVal(cpy._doubleVal), _charVal(cpy._charVal)
{
    return ;
}

Convert::~Convert()
{
    return ;
}

Convert & Convert::operator=(Convert const & cpy)
{
    this->_intVal = cpy._intVal;
    this->_floatVal = cpy._floatVal;
    this->_doubleVal = cpy._doubleVal;
    this->_charVal = cpy._charVal;

    return (*this);
}

int     Convert::getInt(void) const
{
    return (this->_intVal);
}

float   Convert::getFloat(void) const
{
    return (this->_floatVal);
}

double  Convert::getDouble(void) const
{
    return (this->_doubleVal);
}

char    Convert::getChar(void) const
{
    return (this->_charVal);
}

void    Convert::intTo(std::string str)
{
    std::stringstream strI;
    strI << str;
    strI >> _intVal;

    this->_charVal = static_cast<char>(_intVal);
    this->_floatVal = static_cast<float>(_intVal);
    this->_doubleVal = static_cast<double>(_intVal);
    std::cout << "int To " << std::endl;
    if (isprint(_intVal))
        std::cout << "char: " << _charVal << std::endl; 
    else if (str.compare("nan"))
        std::cout << "char: " << "impossible\n";
    else
        std::cout << "char: " << "Non displayable\n";
    
    std::cout << "int: " << _intVal << std::endl;
    std::cout << "float: " << _floatVal << ".0f\n";
    std::cout << "double: " << _doubleVal << ".0\n";
}

void    Convert::charTo(std::string str)
{
    this->_charVal = str[0];
    this->_intVal = static_cast<int>(str[0]);
    this->_floatVal = static_cast<float>(str[0]);
    this->_doubleVal = static_cast<double>(str[0]);

    std::cout << "char: " << _charVal << std::endl;
    std::cout << "int: " << _intVal << std::endl;
    std::cout << "float: " << _floatVal << ".0f\n";
    std::cout << "double: " << _doubleVal << ".0\n";

}

void    Convert::floatTo(std::string str)
{
    std::stringstream strF;
    strF << str;
    strF >> _floatVal;

    this->_doubleVal = static_cast<double>(_floatVal);
    this->_intVal = static_cast<int>(_floatVal);
    
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << _intVal << std::endl;
    
    if (fmod(_floatVal, 1) == 0)
        std::cout << "f: " << std::fixed << std::setprecision(1) << _floatVal << "f\n";
    else
        std::cout << "float: " << std::setprecision(str.length() - 1) << _floatVal << "f\n";

    std::cout << "double: " << _doubleVal << std::endl;
}

void    Convert::doubleTo(std::string str)
{
    std::stringstream strD;
    strD << str;
    strD >> _doubleVal;

    this->_floatVal = static_cast<float>(_doubleVal);
    this->_intVal = static_cast<int>(_doubleVal);

    std::cout << "char: " << "impossible" << std::endl;
    // is + ou - que max int min int impossible
    std::cout << "int: " << _intVal << std::endl;

    std::cout << "float: " << std::setprecision(str.length()) << _floatVal << "f\n";

    std::cout << "double: " << std::setprecision(str.length()) << _doubleVal << std::endl;
}
