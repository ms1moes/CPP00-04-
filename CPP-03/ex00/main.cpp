#include "ClapTrap.hpp"

int main ( void )
{
    ClapTrap claptrap;
	ClapTrap claptrap1("trap1");
    ClapTrap claptrap2("trap2");

    claptrap2 = claptrap;

    //energy tests
    for (int i = 0; i < 9; i++)
        claptrap1.attack("enemy");

    claptrap1.takeDamage(8);
    claptrap1.beRepaired(1);
    claptrap1.beRepaired(1);
    claptrap1.attack("enemy");

    //health tests
    claptrap2.beRepaired(50);
    claptrap2.takeDamage(10);
    claptrap2.attack("enemy");
    claptrap2.beRepaired(10);
    
}
