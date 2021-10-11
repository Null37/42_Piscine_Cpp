#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP
#include <iostream>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook
{
private:
    Contact users[8];
public:
    void promt( void );
    Contact& get_contact(int index);
};

void clear_all(std::string *f_n, std::string *l_n, std::string *ds, std::string *nk_n, std::string *ph_n);
std::string subnoalloc(std::string s);; // subster but not use alloc



#endif