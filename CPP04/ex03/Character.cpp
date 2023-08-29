#include "Character.hpp"

Character::Character( void ) : _name("no name set")
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    
    return ;
}

Character::Character( std::string name ) : _name(name)
{
    for (int i = 0; i < 4; i++)
        this->_materias[i] = NULL;
    
    return ;
}

Character::Character( Character const & cpy )
{
    for (int j = 0; j < 4; j++)
        if (cpy._materias[j])
            this->_materias[j] = cpy._materias[j];
    
    this->_name = cpy._name;
    return ;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_materias[i])
            delete(_materias[i]);

    return ; 
}

Character& Character::operator=( Character const & cpy )
{
    for (int i = 0; i < 4; i++)
        if (_materias[i])
            delete(_materias[i]);
    
    for (int j = 0; j < 4; j++)
        if (cpy._materias[j])
            this->_materias[j] = cpy._materias[j];
    
    this->_name = cpy._name;
    
    return (*this);
}

std::string const & Character::getName() const
{
    return (this->_name);
}

void Character::use(int idx, ICharacter& target)
{
    if (this->_materias[idx])
        this->_materias[idx]->use(target);

    return ;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->_materias[i])
        {
            _materias[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (this->_materias[idx])
        this->_materias[idx] = NULL;
    //leaks comment ca se passe si je ne delete pas l'obj???
    return ;
}
