#include "Cat.hpp"

Cat::Cat() : brain(new Brain())
{
    std::cout << "Called Cat constructor" << std::endl;
    type = "Cat";
}

Cat::Cat(const Cat &copy) : Animal(copy), brain(new Brain(*copy.brain))
{
    std::cout << "Called Cat copy constructor" << std::endl;
    *this = copy;
}

Cat::~Cat()
{
    std::cout << "Called Cat Destructor" << std::endl;
    delete brain;
}

Cat& Cat::operator=(const Cat& src)
{
    std::cout << "Called Cat assignation operator" << std::endl;
    if (this == &src)
        return (*this);
    
    type = src.type;
    delete brain;
    brain = new Brain(*src.brain);

    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "miau miau" << std::endl;
}
