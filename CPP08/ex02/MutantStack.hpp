#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>
# include <iostream>
# include <list>

template < typename T >
class MutantStack : public std::stack<T>
{
   public:
   
        typedef typename std::stack<T>::container_type::iterator iterator;

        MutantStack() : std::stack<T>() 
        { 
            return ;
        }

        MutantStack(MutantStack const & cpy) : std::stack<T>(cpy) 
        { 
            return ;
        }

        virtual ~MutantStack()
        { 
            return ; 
        }

        MutantStack & operator=(MutantStack const & cpy)
        {
            //std::stack<T>::operator=(cpy);
            this->c = cpy.c;
            // member object (container) from the stack 
            return (*this);
        }

        iterator begin( void )
        {
            return (std::stack<T>::c.begin());
        }

        iterator cbegin( void ) const
        {
            return (std::stack<T>::c.cbegin());
        }

        iterator end( void )
        {
            return (std::stack<T>::c.end());
        }

        iterator cend( void ) const
        {
            return (std::stack<T>::c.cend());
        }

        iterator rbegin( void )
        {
            return (std::stack<T>::c.rbegin());
        }

        iterator crbegin( void ) const
        {
            return (std::stack<T>::c.crbegin());
        }

        iterator rend( void )
        {
            return (std::stack<T>::c.rend());
        }

        iterator crend( void ) const
        {
            return (std::stack<T>::c.crend());
        }
};


#endif