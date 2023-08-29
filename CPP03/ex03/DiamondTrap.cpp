#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "Default constructor DiamondTrap " << std::endl;
    return ;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    this->_name = name;
    std::cout << "Constructor DiamondTrap " << std::endl;
    
    return ;
}

DiamondTrap::DiamondTrap( const DiamondTrap &cpy ) : ClapTrap(cpy._name + "_clap_name"), ScavTrap(cpy._name + "_clap_name"), FragTrap(cpy._name + "_clap_name")
{
    this->_name = cpy._name;
    std::cout << "Copy constructor DiamondTrap " << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "Destructor DiamondTrap " << std::endl;
}

DiamondTrap& DiamondTrap::operator=( DiamondTrap const &cpy)
{
    this->_name = cpy._name;
    
    return *this;
}

void    DiamondTrap::whoAmI()
{
    std::cout << "I am " << this->_name << " you can also call me " << ClapTrap::_name << std::endl;
}