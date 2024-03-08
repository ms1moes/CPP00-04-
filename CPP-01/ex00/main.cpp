#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    
    zombie = newZombie("jorge heap");
    randomChump("jorge stack");
    delete(zombie);
    return 0;
}