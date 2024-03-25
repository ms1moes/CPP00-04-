#include "ScavTrap.hpp"

int main ( void )
{
    ScavTrap scavtrap1("broken trap");
    ScavTrap scavtrap2("good trap");
    ScavTrap scavtrap3;

    scavtrap1 = scavtrap3;

    scavtrap1.attack("dummy_trap");
    scavtrap1.guardGate();
    scavtrap2.takeDamage(10);
    scavtrap1.beRepaired(10);
    scavtrap2.beRepaired(10);
    scavtrap2.attack("dummy_trap");
	
}
