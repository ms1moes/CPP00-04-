#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Called Dog constructor" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Called Dog Destructor" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "*Dog NOISES*" << std::endl;
}
