#ifndef FRAGTRAP_CPP
# define FRAGTRAP_CPP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap( void );
        FragTrap( std::string name );
        FragTrap( const FragTrap &cpy );
        virtual ~FragTrap( void );

        FragTrap& operator=( FragTrap const &cpy );

        void    highFivesGuys( void );
};

#endif