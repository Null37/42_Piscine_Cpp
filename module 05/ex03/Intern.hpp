#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
public:
    Intern(void );
    ~Intern();
    Form *makeForm(std::string , std::string);
    class Not_here: public std::exception
    {
      const char* what() const throw();   
    };
};




#endif