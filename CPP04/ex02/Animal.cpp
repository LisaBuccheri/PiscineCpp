#include "Animal.hpp"

AAnimal::AAnimal( void ) : type("Default AAnimal")
{
    std::cout << "AAnimal default constructor" << std::endl;
}

AAnimal::AAnimal( AAnimal const & cpy ) : type(cpy.getType())
{
    std::cout << "AAnimal copy constructor" << std::endl;
    return ;
}

AAnimal::~AAnimal( void )
{
    std::cout << "AAnimal destructor" << std::endl;
    return ;
}

AAnimal & AAnimal::operator=( AAnimal const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (this->type);
}
