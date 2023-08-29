#include "FragTrap.hpp"

int main()
{
    FragTrap *cl = new FragTrap();

    cl->attack("YOU");
    cl->takeDamage(5);
    cl->takeDamage(50);
    cl->beRepaired(7);

    FragTrap clap1("Sam");
    clap1.takeDamage(4);
    clap1.highFivesGuys();

    delete(cl);

    return (0);
}