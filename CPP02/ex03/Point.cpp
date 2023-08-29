#include "Point.hpp"

Point::Point( void ) : _x(0), _y(0)
{
    return ;
}

Point::Point( float const a, float const b ) : _x(a), _y(b)
{
    return ;
}

Point::Point( Point const &cpy ) : _x(cpy.getX()), _y(cpy.getY())
{
   //*this = cpy;

    return ;
}

Point::~Point( void )
{
    return ;
}

Point &Point::operator=( Point &cpy)
{
    if (this != &cpy)
        *this = cpy;

    return (*this);
}

Fixed Point::getX( void ) const
{
    return (this->_x);
}

Fixed Point::getY( void ) const
{
    return (this->_y);
}
