#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("no type")
{
    return ;
}

AMateria::AMateria( std::string const &type ) : _type(type)
{
    return ;
}

AMateria::AMateria( AMateria const & cpy )
{
    this->_type = cpy._type;
}

AMateria::~AMateria()
{
    return ;
}

AMateria & AMateria::operator=( AMateria const & cpy )
{
    this->_type = cpy._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}
