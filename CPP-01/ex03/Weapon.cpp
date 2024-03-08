#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type) : type(weapon_type)
{
}

Weapon::~Weapon(void)
{
}

const std::string& Weapon::getType()
{
    return type;
}

void Weapon::setType(std::string new_type)
{
    type = new_type;
}