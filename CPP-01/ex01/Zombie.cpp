#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    cout << name << " died" << endl;
}

void Zombie::announce()
{
    cout << name << ": BraiiiiiiinnnzzzZ..." << endl;
}

void Zombie::set_name(string name)
{
    this->name = name;
}