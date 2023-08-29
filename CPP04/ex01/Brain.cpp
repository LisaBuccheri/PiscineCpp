#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Brain default constructor" << std::endl;

}


Brain::Brain( Brain const &br )
{
    std::cout << "Brain copy constructor" << std::endl;

    *this = br;
    return ;   
}

Brain::~Brain()
{
    std::cout << "Brain destructor" << std::endl;
    return ;
}

Brain& Brain::operator=(Brain const &cpy)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = cpy.ideas[i];
    
    return (*this);
}

