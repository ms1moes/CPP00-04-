#include "Contact.hpp"

using namespace std;

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

void Contact::set_first_name(string str)
{
    this->first_name = str;
}

void Contact::set_last_name(string str)
{
    this->last_name = str;
}

void Contact::set_nickname(string str)
{
    this->nickname = str;
}

void Contact::set_phone_number(string str)
{
    this->phone_number = str;
}

void Contact::set_darkest_secret(string str)
{
    this->darkest_secret = str;
}

string Contact::get_first_name(void)
{
    return this->first_name;
}

string Contact::get_last_name(void)
{
    return this->last_name;
}

string Contact::get_nickname(void)
{
    return this->nickname;
}

string Contact::get_phone_number(void)
{
    return this->phone_number;
}

string Contact::get_darkest_secret(void)
{
    return this->darkest_secret;
}