#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Called Dog constructor" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy) // Call the parent constructor
{
    std::cout << "Called Dog copy constructor" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Called Dog Destructor" << std::endl;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Called Dog assignation operator" << std::endl;
    type = src.type;
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}
