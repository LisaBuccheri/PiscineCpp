#include "ClapTrap.hpp"

int main()
{
    ClapTrap *cl = new ClapTrap("HEY");

    cl->attack("YOU");
    cl->takeDamage(5);
    cl->takeDamage(6);
    cl->beRepaired(7);
    cl->takeDamage(5);

    delete(cl);

    return (0);
}