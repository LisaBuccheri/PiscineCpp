#include "Animal.hpp"

Animal::Animal( void ) : type("Default Animal")
{
    std::cout << "Animal default constructor" << std::endl;
}

Animal::Animal( Animal const & cpy ) : type(cpy.getType())
{
    std::cout << "Animal copy constructor" << std::endl;
    return ;
}

Animal::~Animal( void )
{
    std::cout << "Animal destructor" << std::endl;
    return ;
}

Animal & Animal::operator=( Animal const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "I am an Animal" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}
