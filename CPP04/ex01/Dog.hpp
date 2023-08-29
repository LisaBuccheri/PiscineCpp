#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{  
    public:
        Dog( void );
        Dog( Dog const & cpy );
        ~Dog( void );

        Dog & operator=( Dog const & cpy );

        void makeSound() const;
        std::string getType() const;

    private:
        std::string type;
        Brain*      brain;

};

#endif