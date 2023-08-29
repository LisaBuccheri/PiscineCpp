#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
    std::cout << "Default constructor ScavTrap " << this->_name << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
    std::cout << "Constructor ScavTrap " << this->_name << std::endl;
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 50;
    this->_attackDamage = 20;
    return ;
}

ScavTrap::ScavTrap( ScavTrap const &cpy )
{
    std::cout << "Copy constructor ScavTrap " << this->_name << std::endl;

    *this = cpy;
}

ScavTrap::~ScavTrap( void )
{
    std::cout << "Destructor ScavTrap " << this->_name << std::endl;
    return ;
}

ScavTrap & ScavTrap::operator=( ScavTrap const &cpy )
{
    this->_name = cpy._name;
    this->_hitPoint = cpy._hitPoint;
    this->_energyPoint = cpy._energyPoint;
    this->_attackDamage = cpy._attackDamage;

    return (*this);
}

void    ScavTrap::attack( const std::string &target )
{
    if (this->_energyPoint == 0 || this->_hitPoint == 0)
    {
        std::cout << this->_name << " cannot attack" << std::endl;
        return ;
    }
    this->_energyPoint --;

    std::cout << "ScavTrap " << this->_name << " attacks " << target << " causing him ";
    std::cout << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " enter in Gate Keeper mode! " << std::endl;
    
    return ;
}
