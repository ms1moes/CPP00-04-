#include "Phonebook.hpp"

int main(void)
{
    Phonebook   phonebook;
    std::string command;

    system("clear");
    while (command != "EXIT")
    {
        std::cout << "Choose a command! (ADD, SEARCH or EXIT): ";
        getline(std::cin, command);
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        if(std::cin.eof())
        {
            std::cout << "Invalid command!" << std::endl;
            return (0);
        }
    }
}