#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "called FragTrap constructor" << std::endl;
    this->name = "Default FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "called FragTrap constructor with name" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy)
{
    std::cout << "called FragTrap copy contructor" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "Called FragTrap destructor" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << "Called FragTrap assignation operator" << std::endl;
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

void FragTrap::attack(const std::string& target)
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

void FragTrap::beRepaired(unsigned int amount)
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

void FragTrap::highFivesGuys()
{
    std::cout << this->name << " requests a positive high five !!!" << std::endl;
}
