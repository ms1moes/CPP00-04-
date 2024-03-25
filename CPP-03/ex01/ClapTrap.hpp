#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    protected:
        std::string name;
        int         hitPoints;
        int         energyPoints;
        int         attackDamage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& src);

        virtual void attack(const std::string& target);
        virtual void beRepaired(unsigned int amount);
        void takeDamage(unsigned int amount);
        
};

#endif
