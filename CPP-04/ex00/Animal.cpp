#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Called Animal constructor" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Called Animal Destructor" << std::endl;
}

void Animal::makeSound()
{
    std::cout << "*ANIMAL NOISES*" << std::endl;
}