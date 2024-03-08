#ifndef HUMANB_H
# define HUMANB_H

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon* weapon_ptr;
public:
    HumanB(const std::string& human_name);
    ~HumanB(void);

    void setWeapon(Weapon* new_weapon);

    void attack();
};

#endif