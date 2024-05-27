#include "Character.hpp"

Character::Character() : _name("")
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const & src)
{
    _name = src._name;
    for (int i = 0; i < 4; i++)
    {
        if (src._inventory[i])
            _inventory[i] = src._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_inventory[i])
            delete _inventory[i];
}

Character & Character::operator=(Character const & src)
{
    _name = src._name;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        if (src._inventory[i])
            _inventory[i] = src._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    if (!m)
    {
        std::cout << "Invalid materia" << std::endl;
        return;
    }

    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            std::cout << "Materia equipped: " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "Character inventory is full" << std::endl;
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cout << "Invalid index OR empty inventory slot" << std::endl;
        return;
    }
    std::cout << "Materia unequipped: " << _inventory[idx]->getType() << std::endl;
    _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_inventory[idx])
    {
        std::cout << "Invalid index OR empty inventory slot" << std::endl;
        return;
    }
    _inventory[idx]->use(target);
}

AMateria	*Character::getMateriaFromInventory(int idx)
{
	return (this->_inventory)[idx];
}