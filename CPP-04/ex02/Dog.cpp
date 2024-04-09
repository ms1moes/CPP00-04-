#include "Dog.hpp"

Dog::Dog() : brain(new Brain())
{
    std::cout << "Called Dog constructor" << std::endl;
    type = "Dog";
}

Dog::Dog(const Dog &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << "Called Dog copy constructor" << std::endl;
    *this = copy;
}

Dog::~Dog()
{
    std::cout << "Called Dog Destructor" << std::endl;
    delete brain;
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "Called Dog assignation operator" << std::endl;
    if (this == &src)
        return (*this);
    
    type = src.type;
    delete brain;
    brain = new Brain(*src.brain);

    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "woof woof" << std::endl;
}
