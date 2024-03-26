#include "FragTrap.hpp"

int main ( void )
{
    FragTrap fragtrap1("broken trap");
    FragTrap fragtrap2("good trap");
    FragTrap fragtrap3;

    fragtrap1 = fragtrap3;

    fragtrap1.attack("dummy_trap");
    fragtrap1.highFivesGuys();
    fragtrap2.takeDamage(10);
    fragtrap1.beRepaired(10);
    fragtrap2.beRepaired(10);
    fragtrap2.attack("dummy_trap");
}
