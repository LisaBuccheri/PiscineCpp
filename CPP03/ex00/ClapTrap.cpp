#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("name not defined"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Default constructor claptrap " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap( std::string name ) : _name(name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
    std::cout << "Constructor claptrap " << this->_name << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const &cpy )
{
    std::cout << "Copy constructor claptrap " << this->_name << std::endl;
    *this = cpy;

    return ;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "Destructor claptrap " << this->_name << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &cpy )
{
    this->_name = cpy._name;
    this->_hitPoint = cpy._hitPoint;
    this->_energyPoint = cpy._energyPoint;
    this->_attackDamage = cpy._attackDamage;

    return (*this);
}

void    ClapTrap::attack( const std::string &target )
{
    if (this->_energyPoint <= 0 || this->_hitPoint <= 0)
    {
        std::cout << this->_name << " cannot attack" << std::endl;
        return ;
    }
    this->_energyPoint --;
    std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing him ";
    std::cout << this->_attackDamage << " points of damage!" << std::endl;
    return ;
}

void    ClapTrap::takeDamage( unsigned int amount )
{
    if (this->_hitPoint < amount)
    {
        this->_hitPoint = 0;
        std::cout << this->_name << " is dead!" << std::endl;
        return ;
    }
    this->_hitPoint -= amount;
    std::cout << "ClapTrap " << this->_name << " takes damage" << ", causing ";
    std::cout << amount << " points of damage!" << std::endl;

    return ;
}

void    ClapTrap::beRepaired( unsigned int amount )
{
    if (this->_energyPoint <= 0 || this->_hitPoint <= 0)
    {
        std::cout << this->_name << " cannot heal" << std::endl;
        return ;
    }
    this->_energyPoint --;
    this->_hitPoint += amount;
    std::cout << "ClapTrap " << this->_name << " is healing himself " << "getting him ";
    std::cout << amount << " hit points back!" << std::endl;

    return ;
}
