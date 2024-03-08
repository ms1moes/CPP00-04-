#include "HumanA.hpp"

HumanA::HumanA(std::string human_name, Weapon& human_weapon) : name(human_name), weapon(human_weapon)
{
}

HumanA::~HumanA(void)
{
}

void HumanA::attack()
{
    std::cout << name << " attacks with " << weapon.getType() << std::endl;
}