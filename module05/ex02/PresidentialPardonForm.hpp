#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#define PresidentialPardonForm PPF

class PresidentialPardonForm: public Form
{
public:
    /*
        getter and setters
    */
    PresidentialPardonForm(void );
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PPF &_ppf);
    ~PresidentialPardonForm();
    //    EDN G-S

    // operators
    void operator=(const PPF&);
};



#endif
