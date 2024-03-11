#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("BOMBA"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap " << name << " activated !!!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& obj)
{
    std::cout << "Assignation operator called" << std::endl;
    this->name = obj.name;
    this->hitPoints = obj.hitPoints;
    this->energyPoints = obj.energyPoints;
    this->attackDamage = obj.attackDamage;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is out of energy !!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !!!" << std::endl;
    this->energyPoints -= 1;
    takeDamage(this->attackDamage);

}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << "ClapTrap " << this->name << " is already dead !!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage !!!" << std::endl;
    this->hitPoints -= amount;
    if (this->hitPoints < 0)
        this->hitPoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints == 10)
    {
        std::cout << "ClapTrap " << this->name << " is already full HP !!!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " is being repaired for " << amount << " HP !!!" << std::endl;
    this->hitPoints += amount;
    if (this->hitPoints > 10)
        this->hitPoints = 10;
}
