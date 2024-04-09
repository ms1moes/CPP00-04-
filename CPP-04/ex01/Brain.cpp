#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Called Brain constructor" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "Empty";
}

Brain::Brain(const std::string &idea)
{
    std::cout << "Called Brain constructor with ideas" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
}

Brain::Brain(const Brain &copy)
{
    std::cout << "Called Brain copy constructor" << std::endl;
    *this = copy;
}

Brain::~Brain()
{
    std::cout << "Called Brain Destructor" << std::endl;
}

Brain& Brain::operator=(const Brain& src)
{
    std::cout << "Called Brain assignation operator" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = src.ideas[i];
    return (*this);
}
