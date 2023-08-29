#ifndef DIAMONDTRAP_CPP
# define DIAMONDTRAP_CPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{

    private:
        std::string _name;

    public:
        DiamondTrap( void );
        DiamondTrap( std::string name );
        DiamondTrap( const DiamondTrap &cpy );
        ~DiamondTrap( void );

        DiamondTrap& operator=( DiamondTrap const &cpy );

        void    whoAmI( void );
        
        using FragTrap::_hitPoint;
        using ScavTrap::_energyPoint;
        using FragTrap::_attackDamage;
        using ScavTrap::attack;
};

#endif