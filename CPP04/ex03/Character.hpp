#pragma once
#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
    public:
        Character( void );
        Character( std::string name );
        Character( Character const & cpy );
        virtual ~Character();

        Character& operator=( Character const & cpy );
        
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);

    private:
        AMateria *(_materias[4]);
        std::string _name;
};