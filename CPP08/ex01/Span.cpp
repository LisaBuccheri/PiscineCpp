#include "Span.hpp"

Span::Span() : _nb(0)
{
    return ;
}

Span::Span(unsigned int N) : _nb(N)
{
    return ;
}

Span::Span(Span const & cpy) : _nb(cpy._nb), _list(cpy._list)
{
    return ;
}

Span::~Span()
{
    return ;
}

Span &Span::operator=(Span const & cpy)
{
    this->_nb = cpy._nb;
    this->_list = cpy._list;

    return (*this);
}

void Span::addNumber(const int nb)
{
    if (this->_list.size() < this->_nb)
        this->_list.push_back(nb);
    else
        throw(NoSpace());
    
    return ;
}

int Span::shortestSpan()
{
    if (this->_list.size() <= 1)
        throw(NoDistance());

    std::list<int>::iterator i = this->_list.begin();
    std::list<int>::iterator j = this->_list.begin();
    j++;
    int shortest = abs(*i - *j);

    for (i = this->_list.begin(); i != this->_list.end(); i++)
        for (j = this->_list.begin(); j != this->_list.end(); ++j)
            if ((*i != *j) && shortest > abs(*i - *j))
                shortest = abs(*i - *j);

    /*
    iterer sur les differents elements du tableau 
    parcourir chaque element avec un autre (une boucle dans une boucle)
    {
        pour chaque I je parcours tous les J ainsi de suite  
        trouver comment avec les iterators je peux parcourir 
        chaque elements de la liste avec les suivants 
    } 
    stocker la difference et verifier a chaque iteration qu'elle est la 
    plus petite 
    */

    return (shortest);
}

int Span::longestSpan()
{
    if (this->_list.size() <= 1)
        throw(NoDistance());

    int   min;
    int   max;

    min = *std::min_element(this->_list.begin(), this->_list.end());
    max = *std::max_element(this->_list.begin(), this->_list.end());

    return (max - min);
}

const char* Span::NoSpace::what() const throw()
{
    return ("No more space left for add number\n");
}

const char* Span::NoDistance::what() const throw()
{
    return ("Not enough number to calculate distance\n");
}