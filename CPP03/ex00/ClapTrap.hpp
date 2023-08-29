#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

#include <iostream>

class ClapTrap
{
    private:

        std::string     _name;
        unsigned int    _hitPoint;
        unsigned int    _energyPoint;
        unsigned int    _attackDamage;

    public:

        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const &cpy );
        ~ClapTrap();

        ClapTrap& operator=( ClapTrap const &cpy );

        void    attack( const std::string &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
};

#endif
