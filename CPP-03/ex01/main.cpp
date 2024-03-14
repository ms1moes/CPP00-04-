#include "ClapTrap.hpp"

int main ( void )
{
	ClapTrap a = ClapTrap("arma");
    ClapTrap b = ClapTrap("bomba");
    ClapTrap aCpy = ClapTrap(a);

    for (int i = 0; i < 9; i++)
	{
        a.attack("bomba");
		//b.takeDamage(0);
    }
    b.takeDamage(1);
	a.takeDamage(2);
    b.beRepaired(0);
    b.beRepaired(1);
	b.beRepaired(1);
    a.beRepaired(1);
	a.beRepaired(1);
	
}
