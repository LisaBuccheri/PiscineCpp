#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain
{
    protected:
        std::string ideas[100];

    public:
        Brain( void );
        Brain( Brain const &br );
        ~Brain();

        Brain& operator=(Brain const &cpy);
};

#endif