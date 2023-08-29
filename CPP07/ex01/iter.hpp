#ifndef ITER_HPP
# define ITER_HPP

template< typename T>
void    iter(T *adr, int len, void fct(T const & a))
{
    for (int i = 0; i < len; i++)
        fct(adr[i]);
}

#endif
