#pragma once
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string _type;

    public:
        AMateria( void );
        AMateria( std::string const &type );
        AMateria( AMateria const & cpy );
        virtual ~AMateria();

        AMateria& operator=( AMateria const & cpy );

        std::string const& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target) = 0;
};