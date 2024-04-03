#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
    private:
        int     index;
        Contact contacts[8];

    public:
        Phonebook(void);
        ~Phonebook(void);
        void add(void);
        void search(void);
        void print(Contact contact);

        void trim(std::string& str);
        bool numberChecker(const std::string& str);
        bool textChecker(std::string& str);
        

                /* getter */
        Contact get_contact(int index);
};

#endif
