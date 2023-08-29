#include "Dog.hpp"

Dog::Dog( void ) : type("Dog")
{
    std::cout << "Dog default constructor" << std::endl;
    this->brain = new Brain;

}

Dog::Dog( Dog const & cpy ) : type(cpy.getType())
{
    std::cout << "Dog copy constructor" << std::endl;
    this->brain = new Brain;

    return ;
}

Dog::~Dog( void )
{
    delete(brain);
    std::cout << "Dog destructor" << std::endl;

    return ;
}

Dog & Dog::operator=( Dog const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Ouaf!" << std::endl;
}

std::string Dog::getType() const
{
    return (this->type);
}