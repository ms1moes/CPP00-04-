#include "ScavTrap.hpp"

int main ( void )
{
    ScavTrap scavtrap;
	ScavTrap scavtrap1("trap1");
    ScavTrap scavtrap2("trap2");

    scavtrap2 = scavtrap;

    //testing new attributes values
    scavtrap1.attack("dummy_trap");
    scavtrap1.guardGate();

    scavtrap2.takeDamage(50);
    scavtrap2.takeDamage(50);
    scavtrap2.beRepaired(20);
    scavtrap2.attack("dummy_trap");

    scavtrap.takeDamage(90);
    scavtrap.beRepaired(300);
    scavtrap.beRepaired(90);
    scavtrap.beRepaired(1);
}
