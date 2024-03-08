#include "Phonebook.hpp"

int main(void)
{
    Phonebook   phonebook;
    string      command;

    system("clear");
    while (1)
    {
        cout << "Choose a command! (ADD, SEARCH or EXIT): ";
        getline(cin, command);
        if (command == "ADD")
            phonebook.add();
        else if (command == "SEARCH")
            phonebook.search();
        else if (command == "EXIT")
            break;
        else
            cout << "Invalid command" << endl;
        cin.clear();
    }
}