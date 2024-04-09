#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "Called WrongCat constructor" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) // Call the parent constructor
{
    std::cout << "Called WrongCat copy constructor" << std::endl;
    *this = copy;
}

WrongCat::~WrongCat()
{
    std::cout << "Called WrongCat Destructor" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& src)
{
    std::cout << "Called WrongCat assignation operator" << std::endl;
    type = src.type;
    return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "notMiau notMiau" << std::endl;
}
