#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{

    public:
        Ice( void );
        Ice( Ice const & cpy );
        ~Ice();

        Ice& operator=( Ice const & cpy );

        Ice* clone() const;
        void use(ICharacter& target);
    
    ///private:
        //std::string _type;
}; 
