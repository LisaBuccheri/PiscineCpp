#ifndef	Point_HPP
# define Point_HPP

# include "Fixed.hpp"

class Point
{
    private:
        
        Fixed const _x;
        Fixed const _y;

    public:

        Point( void );
        Point( float const a, float const b );
        Point( Point const &cpy );
        ~Point( void );

        Point &operator=( Point &n);

        Fixed   getX( void ) const;
        Fixed   getY( void ) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif