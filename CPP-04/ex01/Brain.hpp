#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(const std::string &idea);
        Brain(const Brain &copy);
        Brain& operator=(const Brain& src);
        virtual ~Brain();
};

#endif
