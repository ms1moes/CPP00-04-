#ifndef WEAPON_H
# define WEAPON_H

# include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon(std::string weapon_type);
    ~Weapon(void);

            /* getter */
    const std::string& getType(void);

            /* setter */
    void setType(std::string new_type);
};

#endif  