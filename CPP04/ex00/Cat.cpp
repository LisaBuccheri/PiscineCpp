#include "Cat.hpp"

Cat::Cat( void ) : type("Cat")
{
    std::cout << "Cat default constructor" << std::endl;
}

Cat::Cat( Cat const & cpy ) : type(cpy.getType())
{
    std::cout << "Cat copy constructor" << std::endl;
    return ;
}

Cat::~Cat( void )
{
    std::cout << "Cat destructor" << std::endl;
    return ;
}

Cat & Cat::operator=( Cat const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Miaouw!" << std::endl;
}

std::string Cat::getType() const
{
    return (this->type);
}
