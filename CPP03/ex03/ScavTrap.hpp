#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:

        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const &cpy );
        virtual ~ScavTrap();

        ScavTrap& operator=( ScavTrap const &cpy );

        void    attack( const std::string &target );
        void    guardGate();
};

#endif