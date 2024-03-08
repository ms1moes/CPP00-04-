#include "Zombie.hpp"

int main(void)
{
    Zombie *horde;

    horde = zombieHorde(3, "heap_zombie");
    delete[] horde;
}