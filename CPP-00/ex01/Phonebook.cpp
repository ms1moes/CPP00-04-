#include "Phonebook.hpp"

Phonebook::Phonebook(void)
{
    this->index = 0;
}

Phonebook::~Phonebook(void)
{
    cout << "Phonebook destroyed" << endl;
}

Contact Phonebook::get_contact(int index)
{
    return this->contacts[index % 8];
}

void Phonebook::add(void)
{
    string str = "";

    system("clear");
    while(!cin.eof() && str == "")
    {
        cout << "Enter first name: ";
        if(getline(cin, str) && str != "")
            this->contacts[this->index % 8].set_first_name(str);
    }
    str = "";
    while(!cin.eof() && str == "")
    {
        cout << "Enter last name: ";
        if(getline(cin, str) && str != "")
            this->contacts[this->index % 8].set_last_name(str);
    }
    str = "";
    while(!cin.eof() && str == "")
    {
        cout << "Enter nickname: ";
        if(getline(cin, str) && str != "")
            this->contacts[this->index % 8].set_nickname(str);
    }
    str = "";
    while(!cin.eof() && str == "")
    {
        cout << "Enter phone number: ";
        if(getline(cin, str) && str != "")
            this->contacts[this->index % 8].set_phone_number(str);
    }
    str = "";
    while(!cin.eof() && str == "")
    {
        cout << "Enter darkest secret: ";
        if(getline(cin, str) && str != "")
        {
            this->contacts[this->index % 8].set_darkest_secret(str);
            system("clear");
            cout << "Contact successfully added" << endl;
        }
    }
    this->index++;
    if (this->index > 7)
    cout << "Phonebook is full, your next contact will overwrite information from the oldest one!" << endl;
}  

void Phonebook::print(Contact contact)
{
    cout << "First name: " << contact.get_first_name() << endl;
    cout << "Last name: " << contact.get_last_name() << endl;
    cout << "Nickname: " << contact.get_nickname() << endl;
    cout << "Phone number: " << contact.get_phone_number() << endl;
    cout << "Darkest secret: " << contact.get_darkest_secret() << endl;
}

string	adjust_width(string str, unsigned long max_size)
{
	if (str.size() < max_size)
        return (str);
	str.resize(max_size);
	str[str.size() - 1] = '.';
    return (str);
}

int display_interface(Contact contacts[8])
{
    int     num;
    int     i;
    char    index;
    string  str;

    cout << " ___________________________________________ " << endl;
    cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
    cout << "|----------|----------|----------|----------|" << endl;

    num = 0;
    i = -1;
    while (++i < 8)
    {
        index = '1' + i; /* valor em string to index (começa em 1 e vai até 8) */
        if (!contacts[i].get_first_name().empty())
        {
            str = index;
            cout << "|" << setw(10) << str;
            str = adjust_width(contacts[i].get_first_name(), 10);
            cout << "|" << setw(10) << str;
            str = adjust_width(contacts[i].get_last_name(), 10);
            cout << "|" << setw(10) << str;
            str = adjust_width(contacts[i].get_nickname(), 10);
            cout << "|" << setw(10) << str;
            cout << "|" << endl;
            num++;
        }
    }
    cout << "--------------------------------------------- " << endl;
    return num;
}

void	Phonebook::search(void)
{
	string	str;

    system("clear");
	if (!display_interface(this->contacts))
	{
		cout << endl << "Phonebook is empty!" << endl;
		return ;
	}
	while (!cin.eof())
	{
		cout << "Select an index: ";
		if (getline(cin, str) && str != "")
			if (str.size() == 1 && str[0] >= '1' && str[0] <= '8' &&
            this->contacts[str[0] - 1 - '0'].get_first_name() != "")
				break ;
		if (str != "")
			cout << "Invalid index!" << endl;
	}
	if (!cin.eof())
		this->print(this->contacts[str[0] - 1 - '0']);
}   