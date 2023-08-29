#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type("Default WrongAnimal")
{
    std::cout << "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & cpy ) : type(cpy.getType())
{
    std::cout << "WrongAnimal copy constructor" << std::endl;
    return ;
}

WrongAnimal::~WrongAnimal( void )
{
    std::cout << "WrongAnimal destructor" << std::endl;
    return ;
}

WrongAnimal & WrongAnimal::operator=( WrongAnimal const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I am a WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
