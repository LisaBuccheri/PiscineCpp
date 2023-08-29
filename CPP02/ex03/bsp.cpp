#include "Fixed.hpp"
#include "Point.hpp"

// algo 1
// autre facon de calculer

/*
Fixed   is_it_in(Point point, Point a, Point b)
{
    return (point.getX() - b.getX()) * (a.getY() - b.getY()) - (a.getX() - b.getX()) * (point.getY() - b.getY());
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    Fixed   dist1;
    Fixed   dist2;
    Fixed   dist3;
    bool    is_neg;
    bool    is_out;

    dist1 = is_it_in(point, a, b);
    dist1 = is_it_in(point, b, c);
    dist1 = is_it_in(point, c, a);

    is_neg = (dist1 < 0 || dist2 < 0 || dist3 < 0);
    is_out = (dist1 > 0 || dist2 > 0 || dist3 > 0);

    return !(is_neg && is_out);
}*/


//algo 2
// additionne l'aire des trois triangle fait avec le point et les sommets des autres triangle
Fixed is_in(Point a, Point b, Point c)
{
    Fixed tmp = ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY()))) / 2;
    if (tmp < 0)
        tmp = tmp * -1;
    return (tmp);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    if(is_in(a, b, point) + is_in(b, c, point) + is_in(c, a, point) == is_in(a, b, c))
    {
        if (is_in(a, b, point) == 0 || is_in(b, c, point) == 0 || is_in(c, a, point) == 0)
            return(false);
        return (true);
    }
    return(false);
}