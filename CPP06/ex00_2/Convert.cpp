#include "Convert.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>

Convert::Convert() : _intVal(0), _floatVal(0), _doubleVal(0), _charVal(0)
{
    return ;
}

Convert::Convert(std::string str)
{
    int     i = std::atoi(str.c_str());
    double  f = std::atof(str.c_str());
    
    if (str.length() == 1 && isprint(str[0]) && str[0] != '0')
    {
        this->_charVal = str[0];
        this->_intVal = static_cast<int>(str[0]);
        this->_floatVal = static_cast<float>(str[0]);
        this->_doubleVal = static_cast<double>(str[0]);
    }
    else
    {
        if (isprint(f))
            this->_charVal = static_cast<char>(f);
        this->_intVal = i;
        this->_floatVal = static_cast<float>(f);
        this->_doubleVal = static_cast<double>(f);
    }
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

std::ostream & operator<<( std::ostream & o, Convert const &conv)
{
    if (isprint(conv.getFloat()))
        o << "char: '" << conv.getChar() << "'\n";
    else if (conv.getDouble() == NAN)
        o << "char: impossible" << "\n";
    else
        o << "char: Non displayable" << "\n";

    if (conv.getInt() == (int)conv.getFloat())
        o << "int: " << conv.getInt() << "\n";
    else
        o << "int: Non displayable" << "\n";

    if (conv.getFloat() == (int)conv.getFloat())
    {
        o << "float: " << conv.getFloat() << ".0f\n";
        o << "double: " << conv.getDouble() << ".0\n";
    }
    else
    {
        o << "float: " << conv.getFloat() << "f\n";
        o << "double: " << conv.getDouble() << "\n";
    }
    return o;
}
