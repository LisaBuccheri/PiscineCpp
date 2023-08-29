#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{  
    public:
        Dog( void );
        Dog( Dog const & cpy );
        ~Dog( void );

        Dog & operator=( Dog const & cpy );

        virtual void makeSound() const;
        virtual std::string getType() const;

    private:
        std::string type;
};

#endif