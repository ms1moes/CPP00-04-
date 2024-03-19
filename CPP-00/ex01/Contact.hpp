#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
    
public:
    Contact(void);
    ~Contact(void);

    /* setters */
    void set_first_name(std::string str);
    void set_last_name(std::string str);
    void set_nickname(std::string str);
    void set_phone_number(std::string str);
    void set_darkest_secret(std::string str);

    /* getters */
    std::string get_first_name(void);
    std::string get_last_name(void);
    std::string get_nickname(void);
    std::string get_phone_number(void);
    std::string get_darkest_secret(void);

};

#endif
