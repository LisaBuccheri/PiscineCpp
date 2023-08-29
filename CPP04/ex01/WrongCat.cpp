#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : type("WrongCat")
{
    std::cout << "WrongCat default constructor" << std::endl;
}

WrongCat::WrongCat( WrongCat const & cpy ) : type(cpy.getType())
{
    std::cout << "WrongCat copy constructor" << std::endl;
    return ;
}

WrongCat::~WrongCat( void )
{
    std::cout << "WrongCat destructor" << std::endl;
    return ;
}

WrongCat & WrongCat::operator=( WrongCat const & cpy )
{
    this->type = cpy.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Miaouw!" << std::endl;
}

std::string WrongCat::getType() const
{
    return (this->type);
}
