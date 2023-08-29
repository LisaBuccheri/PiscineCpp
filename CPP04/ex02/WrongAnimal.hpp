#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
        
    public:
        WrongAnimal( void );
        WrongAnimal( WrongAnimal const & cpy );
        virtual ~WrongAnimal( void );

        WrongAnimal& operator=( WrongAnimal const & cpy );

        virtual void makeSound() const;
        virtual std::string getType() const;
};

#endif