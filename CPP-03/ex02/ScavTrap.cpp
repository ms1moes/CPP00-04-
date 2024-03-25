#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Called default scavtrap constructor" << std::endl;
    this->name = "Default ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Called Scavtrap contructor with name" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy)
{
    std::cout << "Called scavtrap copy constructor" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Called scavtrap destructor" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "Called scavtrap assignation operator" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
    {
        std::cout << this->name << " is out of energy, failed to atack !!!" << std::endl;
        return ;
    }
    if (this->hitPoints == 0)
    {
        std::cout << this->name << "is destroyed, unable to atack !!! " << std::endl;
        return ;
    }
    std::cout << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !!!" << std::endl;
    this->energyPoints -= 1;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this-> energyPoints == 0)
    {
       std::cout << this->name << " is out of energy, failed to repair !!!" << std::endl;
       return ;
    }
    if (amount == 0)
    {
        std::cout << this->name << " cant be healed by that amount of HP !!!" << std::endl;
        return ;
    }
    if (this->hitPoints == 100)
    {
        std::cout << this->name << " is already at full health !!!" << std::endl;
        return ;
    }
    std::cout << this->name << " has been repaired by " << amount << " points !!!" << std::endl;
    this->hitPoints += amount;
    if(this->hitPoints > 100)
        this->hitPoints = 100;
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " is now in gatekeeper mode !!!" << std::endl;
}
