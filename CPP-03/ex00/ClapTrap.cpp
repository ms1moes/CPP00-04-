#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("Default"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "(Constructor with name called), ClapTrap " << name << " activated !!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
    this->name = src.name;
    this->hitPoints = src.hitPoints;
    this->energyPoints = src.energyPoints;
    this->attackDamage = src.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy, failed to atack !!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !!!" << std::endl;
    this->energyPoints -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead !!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage !!!" << std::endl;
    this->hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy !!!" << std::endl;
        return ;
    }
    if (amount == 0)
    {
        std::cout << "ClapTrap " << this->name << " cant be healed by that amount of HP !!!" << std::endl;
        return ;
    }
    if (this->hitPoints == 10)
    {
        std::cout << "ClapTrap " << this->name << " is already full HP so it can't be repaired!!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is being repaired for " << amount << " HP !!!" << std::endl;
    this->hitPoints += amount;
    this->energyPoints -= 1;
    if (this->hitPoints > 10)
        this->hitPoints = 10;
}
