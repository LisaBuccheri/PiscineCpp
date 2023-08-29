#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:

        ScavTrap( void );
        ScavTrap( std::string name );
        ScavTrap( ScavTrap const &cpy );
        ~ScavTrap();

        ScavTrap& operator=( ScavTrap const &cpy );

        //faut it redefinir les fonctions dans le cas ou on les reutilise pas de facon differentes?
        void    attack( const std::string &target );
        void    guardGate();
};

#endif