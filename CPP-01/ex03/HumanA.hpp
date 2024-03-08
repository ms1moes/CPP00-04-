#ifndef HUMANA_H
# define HUMANA_H

# include <string>
# include "Weapon.hpp"
# include <iostream>

class HumanA
{
private:
    std::string name;
    Weapon& weapon;
public:
    HumanA(std::string human_name, Weapon& human_weapon);
    ~HumanA(void);
    void attack(void);
};

#endif