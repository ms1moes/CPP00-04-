#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
    protected:
        std::string type;
        Animal();
    public:
        Animal(const Animal &copy);
        Animal& operator=(const Animal& src);
        virtual ~Animal();

    virtual void makeSound() const = 0;
    std::string getType() const;

};

#endif
