#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{

    public:
        Cure( void );
        Cure( Cure const & cpy );
        ~Cure();

        Cure& operator=( Cure const & cpy );

        Cure* clone() const;
        void use(ICharacter& target);
    
    //private:
      //  std::string _type;
}; 
