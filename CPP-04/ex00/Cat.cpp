#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Called Cat constructor" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Called Cat Destructor" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "*Cat NOISES*" << std::endl;
}