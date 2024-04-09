#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); 
j->makeSound();
meta->makeSound();

delete i;
delete j;
delete meta;

std::cout << "---------------------" << std::endl;

const WrongAnimal* wrong_animal = new WrongAnimal();
const WrongAnimal* wrong_cat = new WrongCat();
std::cout << wrong_animal->getType() << " " << std::endl;
std::cout << wrong_cat->getType() << " " << std::endl;
wrong_animal->makeSound();
wrong_cat->makeSound();

delete wrong_cat;
delete wrong_animal;

return 0;
}