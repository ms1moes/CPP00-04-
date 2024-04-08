#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Scavtrap default constructor called" << std::endl;
    this->name = "Default ScavTrap";
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Scavtrap name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "Scavtrap copy constructor called" << std::endl;
    *this = copy;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& src)
{
    std::cout << "Scavtrap assignation operator called" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

void ScavTrap::attack(const std::string& target)
{
    if (this->hitPoints == 0)
    {
        std::cout << "(scavtrap) " << this->name << " is destroyed, unable to atack !!! " << std::endl;
        return ;
    }
    if (this->energyPoints == 0)
    {
        std::cout << "(scavtrap) " << this->name << " is out of energy, failed to atack !!!" << std::endl;
        return ;
    }
    std::cout << "(scavtrap) " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !!!" << std::endl;
    this->energyPoints -= 1;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << "(scavtrap) " << this->name << " is destroyed, can't be repaired !!!" << std::endl;
        return ;
    }
    if (this-> energyPoints == 0)
    {
       std::cout << "(scavtrap) " << this->name << " is out of energy, failed to repair !!!" << std::endl;
       return ;
    }
    if (this->hitPoints == 100)
    {
        std::cout << "(scavtrap) " << this->name << " is already at full health !!!" << std::endl;
        return ;
    }
    if (amount == 0 || amount + this->hitPoints > 100)
    {
        std::cout << "(scavtrap) " << this->name << " cant be healed by that amount of HP !!!" << std::endl;
        return ;
    }
    std::cout << "(scavtrap) " << this->name << " has been repaired by " << amount << " points !!!" << std::endl;
    this->hitPoints += amount;
    if(this->hitPoints == 100)
        std::cout << "(scavtrap) " << this->name << " is now at full health !!!" << std::endl;
}

void ScavTrap::guardGate()
{
    if(this->hitPoints == 0)
    {
        std::cout << "(scavtrap) " << this->name << " is destroyed, can't guard any gates !!!" << std::endl;
        return ;
    }
    std::cout << "(scavtrap) " << this->name << " is now in gatekeeper mode !!!" << std::endl;
}
