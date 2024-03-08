#include "Zombie.hpp"

Zombie* zombieHorde( int N, string name )
{
    Zombie *horde;

    if (N < 1)
    {
        cout << "you cant create 0 or less zombies !" << endl;
        return 0;
    }
    horde = new Zombie[N];
    for(int i = 0; i < N; ++i)
    {
        horde[i].set_name(name);
        horde[i].announce();
    }

    return horde;
}