#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Contact
{
private:
    string first_name;
    string last_name;
    string nickname;
    string phone_number;
    string darkest_secret;
    
public:
    Contact(void);
    ~Contact(void);

    /* setters */
    void set_first_name(string str);
    void set_last_name(string str);
    void set_nickname(string str);
    void set_phone_number(string str);
    void set_darkest_secret(string str);

    /* getters */
    string get_first_name(void);
    string get_last_name(void);
    string get_nickname(void);
    string get_phone_number(void);
    string get_darkest_secret(void);

};

#endif
