#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug()
{ 
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{ 
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error()
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

int Harl::levelFinder(const std::string& level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = -1;

	while(++i < 4)
		if (levels[i] == level)
			return (i);
	return (i);
}

void Harl::complain(std::string level)
{
    void (Harl::*functions[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int choice = levelFinder(level);

    switch (choice)
    {
        case 0:
            (this->*functions[0])();
            break;
        case 1:
            (this->*functions[1])();
            break;
        case 2:
            (this->*functions[2])();
            break;
        case 3:
            (this->*functions[3])();
            break;
        default:
            std::cout << "unknown complaint" << std::endl;
	        break;
    }
}
