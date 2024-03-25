#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap& copy);
        ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& src);

        void attack(const std::string& target);
        void beRepaired(unsigned int amount);
        void guardGate();
};

#endif
