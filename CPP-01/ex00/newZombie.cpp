#include "Zombie.hpp"

Zombie  *newZombie(string name)
{
    Zombie  *heap_zombie;
    heap_zombie = new Zombie(name);
    return (heap_zombie);
}