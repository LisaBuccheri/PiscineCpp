#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <list>
# include <algorithm>

template < typename T >
int easyfind(T & container, int n)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), n);

    if (iter == container.end())
        return (-1);
    else
        return (std::distance(container.begin(), iter));
    
}

template < typename T >
void    printArray(T const & container)
{
    for (typename T::const_iterator it = container.begin(); it != container.end(); it++)
        std::cout << *it << std::endl;
}

#endif