#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &copy);
        WrongAnimal& operator=(const WrongAnimal& src);
        virtual ~WrongAnimal();

    virtual void makeSound() const;
    std::string getType() const;

};


#endif
