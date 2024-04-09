#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"

int main()
{
    {
    const int size = 10;
    Animal* animals[size];

    for (int i = 0; i < size / 2; i++)
        animals[i] = new Dog();

    for (int i = size / 2; i < size; i++)
        animals[i] = new Cat();

    for (int i = 0; i < size; i++)
        delete animals[i];
    }
    std::cout << "---------------------------------" << std::endl;
    {
        const Dog* dog1 = new Dog();
        const Dog* dog2 = new Dog(*dog1);

        delete dog1;

        dog2->makeSound();
        delete dog2;
    }
    return 0;
}