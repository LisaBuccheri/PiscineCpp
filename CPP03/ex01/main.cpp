#include "ScavTrap.hpp"

int main()
{
    ScavTrap *scav = new ScavTrap("HEY");

    scav->attack("YOU");
    scav->takeDamage(5);
    scav->beRepaired(7);

    ScavTrap sc("BOB");
    sc.guardGate();

    delete (scav);
    return (0);
}