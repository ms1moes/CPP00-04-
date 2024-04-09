#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Called WrongAnimal constructor" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Called WrongAnimal copy constructor" << std::endl;
    *this = copy;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Called WrongAnimal Destructor" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
    std::cout << "Called WrongAnimal assignation operator" << std::endl;
    type = src.type;
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "*WRONG ANIMAL NOISES*" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}
