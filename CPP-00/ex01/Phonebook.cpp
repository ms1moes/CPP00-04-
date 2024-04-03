#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    index = 0;
}

Phonebook::~Phonebook(void)
{
    std::cout << "Phonebook destroyed" << std::endl;
}

Contact Phonebook::get_contact(int index)
{
    return contacts[index % 8];
}

bool Phonebook::isNumeric(const std::string& str)
{
    size_t i = -1;

    while (++i < str.size())
        if (str[i] < '0' || str[i] > '9')
            return false;
    return true;
}

void Phonebook::add(void)
{
    std::string str = "";

    system("clear");
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter first name: ";
        if(getline(std::cin, str) && str != "")
            contacts[index % 8].set_first_name(str);
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter last name: ";
        if(getline(std::cin, str) && str != "")
            contacts[index % 8].set_last_name(str);
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter nickname: ";
        if(getline(std::cin, str) && str != "")
            contacts[index % 8].set_nickname(str);
    }
    str = "";
    while (!std::cin.eof() && str == "")
    {
        std::cout << "Enter phone number: ";
        if (getline(std::cin, str) && str != "")
        {
            if (isNumeric(str))
                contacts[index % 8].set_phone_number(str);
            else
            {
                std::cout << "Invalid phone number! (only numbers)" << std::endl;
                str = "";
            }
        }
    }
    str = "";
    while(!std::cin.eof() && str == "")
    {
        std::cout << "Enter darkest secret: ";
        if(getline(std::cin, str) && str != "")
        {
            contacts[index % 8].set_darkest_secret(str);
            system("clear");
            std::cout << "Contact successfully added" << std::endl;
        }
    }
    index++;
    if (index > 7)
        std::cout << "Phonebook is full, your next contact will overwrite information from the oldest one!" << std::endl;
}  

void Phonebook::print(Contact contact)
{
    std::cout << "First name: " << contact.get_first_name() << std::endl;
    std::cout << "Last name: " << contact.get_last_name() << std::endl;
    std::cout << "Nickname: " << contact.get_nickname() << std::endl;
    std::cout << "Phone number: " << contact.get_phone_number() << std::endl;
    std::cout << "Darkest secret: " << contact.get_darkest_secret() << std::endl;
}

std::string	adjust_width(std::string str, unsigned long max_size)
{
	if (str.size() < max_size)
        return (str);
	str.resize(max_size);
	str[str.size() - 1] = '.';
    return (str);
}

int display_interface(Contact contacts[8])
{
    int     flag;
    int     i;
    char    index;
    std::string  str;

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    flag = 0;
    i = -1;
    while (++i < 8)
    {
        index = '1' + i;
        if (!contacts[i].get_first_name().empty())
        {
            str = index;
            std::cout << "|" << std::setw(10) << str;
            str = adjust_width(contacts[i].get_first_name(), 10);
            std::cout << "|" << std::setw(10) << str;
            str = adjust_width(contacts[i].get_last_name(), 10);
            std::cout << "|" << std::setw(10) << str;
            str = adjust_width(contacts[i].get_nickname(), 10);
            std::cout << "|" << std::setw(10) << str;
            std::cout << "|" << std::endl;
            flag = 1;
        }
    }
    std::cout << "--------------------------------------------- " << std::endl;
    return flag;
}

void	Phonebook::search(void)
{
	std::string	str;

    system("clear");
	if (!display_interface(contacts))
	{
		std::cout << std::endl << "Phonebook is empty!" << std::endl;
		return ;
	}
	while (!std::cin.eof())
	{
		std::cout << "Select an index: ";
		if (getline(std::cin, str) && str != "")
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' &&
            contacts[str[0] - 1 - '0'].get_first_name() != "")
				break ;
		if (str != "")
			std::cout << "Invalid index!" << std::endl;
	}
	if (!std::cin.eof())
		print(contacts[str[0] - 1 - '0']);
}
