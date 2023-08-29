#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{    
    public:
        WrongCat( void );
        WrongCat( WrongCat const & cpy );
        ~WrongCat( void );

        WrongCat& operator=( WrongCat const & cpy );

        void makeSound() const;
        std::string getType() const;
    
    private:
        std::string type;
};

#endif