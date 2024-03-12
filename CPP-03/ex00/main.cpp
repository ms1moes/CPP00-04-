#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap a("adc");

    a.attack("full mr voli");
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
	a.takeDamage(2);
	a.beRepaired(0);
	a.beRepaired(1);
	a.takeDamage(10);
	a.beRepaired(11);
	a.attack("frozen heart bard");
	a.attack("frozen heart bard");
}
