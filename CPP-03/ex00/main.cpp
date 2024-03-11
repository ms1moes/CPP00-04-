#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap();
	ClapTrap a("BOMBA");
	
    a.attack("Dummy1");
    a.takeDamage(5);
    
	a.beRepaired(2);
	a.beRepaired(30);
	a.beRepaired(4); // out of energy
	a.beRepaired(10);
	a.attack("Dummy2");
}
