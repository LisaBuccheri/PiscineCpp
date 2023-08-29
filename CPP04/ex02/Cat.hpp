#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public AAnimal
{    
    public:
        Cat( void );
        Cat( Cat const & cpy );
        ~Cat( void );

        Cat& operator=( Cat const & cpy );

        virtual void makeSound() const;
        std::string getType() const;
    
    private:
        std::string type;
        Brain*      brain;
};

#endif