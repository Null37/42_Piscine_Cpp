#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
#include <iostream>

class Form
{
private:
   const std::string Name;
   bool _signed;
   const int _signgrade;
   const int _exutegrade;
public:
    /*
        constructors and destructors *
    */
    Form(void);
    Form(std::string _name,int _sigrade, int _exgrade);
    Form(const Form&);
    ~Form();
    //                         End *

    /*
        getters and setters -
    */
    std::string gettName( void ) const ;
    bool gettsigned(void) const ;
    int getSigngrade( void ) const ;
    int getExutegrade( void ) const ;
    //            END g-s

    //operartor
    void beSigned(Bureaucrat _bure);
    void operator=(const Form&);
    class GradeTooHighException
    {

    };
    class GradeTooLowException
    {

    };
    
};

std::ostream &operator<<( std::ostream &output, const Form &old);


#endif