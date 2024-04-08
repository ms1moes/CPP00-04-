#include "FragTrap.hpp"

int main ( void )
{
    FragTrap fragtrap;

    for (int i = 0; i < 100; i++)
        fragtrap.attack("enemy");

    fragtrap.takeDamage(40);
    fragtrap.takeDamage(10);
    fragtrap.beRepaired(20);
    fragtrap.attack("enemy");
    fragtrap.highFivesGuys();
    
}
