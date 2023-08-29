#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{    
    public:
        Cat( void );
        Cat( Cat const & cpy );
        ~Cat( void );

        Cat& operator=( Cat const & cpy );

        virtual void makeSound() const;
        virtual std::string getType() const;
    
    private:
        std::string type;
};

#endif