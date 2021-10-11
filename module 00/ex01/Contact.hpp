#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickename;
	std::string dark_scret;
	long long phone_number;
public:
    void set(std::string f_n, std::string l_n, std::string nk_n, std::string ds, long long pn);
    std::string getf_n( void ); // git fisrt name
    std::string getl_n( void ); // get last name
    std::string getnk_n( void );//get nake name
    std::string getds( void );// get dark scret
    int getp_n( void ); //get phone number
};

#endif