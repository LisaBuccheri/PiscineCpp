#ifndef CLAPTRAP_CPP
# define CLAPTRAP_CPP

# include <iostream>

class ClapTrap
{
    protected:

        std::string     _name;
        unsigned int        _hitPoint;
        unsigned int        _energyPoint;
        unsigned int        _attackDamage;

    public:

        ClapTrap( void );
        ClapTrap( std::string name );
        ClapTrap( ClapTrap const &cpy );
        virtual ~ClapTrap();

        ClapTrap& operator=( ClapTrap const &cpy );

        void    attack( const std::string &target );
        void    takeDamage( unsigned int amount );
        void    beRepaired( unsigned int amount );
        
        const std::string&  getName( void ) const;
        unsigned int  getHitPoint( void ) const;
        unsigned int  getEnergyPoint( void ) const;
        unsigned int  getAttackDamage( void ) const;
};

#endif
