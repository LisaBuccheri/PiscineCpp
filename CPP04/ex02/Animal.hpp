#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

class AAnimal
{
    protected:
        std::string type;
        
    public:
        AAnimal( void );
        AAnimal( AAnimal const & cpy );
        virtual ~AAnimal( void );

        AAnimal& operator=( AAnimal const & cpy );

        virtual void makeSound() const = 0;
        virtual std::string getType() const;
};

#endif