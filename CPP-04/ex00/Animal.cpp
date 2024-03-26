#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Called Animal constructor" << std::endl;
    this->type = "Default";
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Called Animal copy constructor" << std::endl;
    *this = copy;
}

Animal::~Animal()
{
    std::cout << "Called Animal Destructor" << std::endl;
}

Animal& Animal::operator=(const Animal& src)
{
    std::cout << "Called Animal assignation operator" << std::endl;
    this->type = src.type;
    return (*this);
}

void Animal::makeSound()
{
    std::cout << "*ANIMAL NOISES*" << std::endl;
}

std::string Animal::getType()
{
    return (this->type);
}
