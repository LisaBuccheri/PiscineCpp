#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal
{
    protected:
        std::string type;
        
    public:
        Animal( void );
        Animal( Animal const & cpy );
        virtual ~Animal( void );

        Animal& operator=( Animal const & cpy );

        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif