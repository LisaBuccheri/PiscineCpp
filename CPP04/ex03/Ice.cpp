
#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice")
{
    return ;
}

Ice::Ice( Ice const & cpy ) : AMateria(cpy.getType())
{
    return ; 
}

Ice::~Ice()
{
    return ; 
}

Ice & Ice::operator=( Ice const & cpy )
{
    this->_type = cpy._type;
    return (*this);
}

Ice* Ice::clone() const
{
    Ice *newIce = new Ice();

    return (newIce);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}