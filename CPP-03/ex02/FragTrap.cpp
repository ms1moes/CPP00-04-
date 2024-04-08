#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "FragTrap default constructor called" << std::endl;
    this->name = "Default FragTrap";
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "FragTrap name constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& src)
{
    std::cout << "FragTrap assignation operator called" << std::endl;
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
        std::cout << "(fragtrap) " << this->name << " is out of energy, failed to atack !!!" << std::endl;
        return ;
    }
    if (this->hitPoints == 0)
    {
        std::cout << "(fragtrap) " << this->name << "is destroyed, unable to atack !!! " << std::endl;
        return ;
    }
    std::cout << "(fragtrap) " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage !!!" << std::endl;
    this->energyPoints -= 1;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this-> energyPoints == 0)
    {
       std::cout << "(fragtrap) " << this->name << " is out of energy, failed to repair !!!" << std::endl;
       return ;
    }
    if (amount == 0)
    {
        std::cout << "(fragtrap) " << this->name << " cant be healed by that amount of HP !!!" << std::endl;
        return ;
    }
    if (this->hitPoints == 100)
    {
        std::cout << "(fragtrap) " << this->name << " is already at full health !!!" << std::endl;
        return ;
    }
    std::cout << "(fragtrap) " << this->name << " has been repaired by " << amount << " points !!!" << std::endl;
    this->hitPoints += amount;
    if(this->hitPoints > 100)
        this->hitPoints = 100;
}

void FragTrap::highFivesGuys()
{
    if (hitPoints == 0)
    {
        std::cout << "(fragtrap) " << this->name << " is destroyed, unable to high five !!!" << std::endl;
        return ;
    }
    std::cout << "(fragtrap) " << this->name << "is requesting positive high fives !!!" << std::endl;
}
