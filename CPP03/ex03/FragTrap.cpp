#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
    std::cout << "Default constructor FragTrap " << std::endl;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
    std::cout << "Constructor FragTrap " << std::endl;
    this->_name = name;
    this->_hitPoint = 100;
    this->_energyPoint = 100;
    this->_attackDamage = 30;

}

FragTrap::FragTrap( const FragTrap &cpy )
{
    *this = cpy;
    std::cout << "Copy constructor FragTrap " << this->_name << std::endl;
}

FragTrap::~FragTrap( void )
{
    std::cout << "Destructor FragTrap " << std::endl;
    return ;
}

FragTrap& FragTrap::operator=( FragTrap const &cpy)
{
    this->_name = cpy.getName();
    this->_hitPoint = cpy.getHitPoint();
    this->_energyPoint = cpy.getEnergyPoint();
    this->_attackDamage = cpy.getAttackDamage();
    
    return (*this);
}

void    FragTrap::highFivesGuys()
{
    std::cout << "Hi I am " << this->_name << ", can I get an high five? " << std::endl;
}