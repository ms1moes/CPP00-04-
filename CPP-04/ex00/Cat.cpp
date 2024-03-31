#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Called Cat constructor" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) // Call the parent constructor
{
    std::cout << "Called Cat copy constructor" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Called Cat Destructor" << std::endl;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Called Cat assignation operator" << std::endl;
    type = src.type;
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "miau miau" << std::endl;
}
