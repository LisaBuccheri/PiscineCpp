#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template < typename T >
T min( T & x, T & y)
{
    return ( x < y ? x : y);
}

template < typename T >
T max( T & x, T & y)
{
    return ( x > y ? x : y);
}

template < typename T >
void swap( T & a, T & b)
{
    T tempo;

    tempo = a;
    a = b;
    b = tempo;
}

#endif