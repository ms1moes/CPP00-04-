#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
    {
        if (src._materia[i])
            _materia[i] = src._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i])
            delete _materia[i];
        if (src._materia[i])
            _materia[i] = src._materia[i]->clone();
        else
            _materia[i] = NULL;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria* m)
{
    if (!m)
    {
        std::cout << "Invalid materia" << std::endl;
        return;
    }
    for (int i = 0; i < 4; i++)
    {
        if (!_materia[i])
        {
            _materia[i] = m;
            std::cout << "Materia learned: " << m->getType() << std::endl;
            return;
        }
    }
    std::cout << "MateriaSource is full" << std::endl;
    delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] && _materia[i]->getType() == type)
        {
            std::cout << "Materia created: " << type << std::endl;
            return _materia[i]->clone();
        }
    }
    std::cout << "Materia not found" << std::endl;
    return NULL;
}
