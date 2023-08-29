
#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure")
{
    return ; 
}

Cure::Cure( Cure const & cpy ) : AMateria(cpy._type)
{
    return ;
}

Cure::~Cure()
{
    return ;
}

Cure & Cure::operator=( Cure const & cpy )
{
    this->_type = cpy._type;
    return (*this);
}

Cure* Cure::clone() const
{
    Cure *newCure = new Cure();

    return (newCure);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
    return ;
}