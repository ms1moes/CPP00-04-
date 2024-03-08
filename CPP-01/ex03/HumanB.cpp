#include "HumanB.hpp"

HumanB::HumanB(const std::string& human_name) : name(human_name), weapon_ptr(NULL)
{

}
HumanB::~HumanB(void)
{

}

void HumanB::setWeapon(Weapon* new_weapon)
{
    weapon_ptr = new_weapon;
}

void HumanB::attack()
{
        if (weapon_ptr != NULL)
            std::cout << name << " attacks with " << weapon_ptr->getType() << std::endl;
        else
            std::cout << name << " attacks without a weapon" << std::endl;
}