# ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
using namespace std;

class Zombie
{
    private:
        string name;

    public:
        Zombie();
        ~Zombie();

        void    announce( void );
        void    set_name( string name );
};

Zombie* zombieHorde( int N, string name );

# endif
