#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include "Form.hpp"
#include <iostream>
#include <exception>

class Bureaucrat
{
private:
    const std::string Name;  
    int Grade; // range form 1 to 150
public:
    Bureaucrat(std::string _name, int _grade);
    Bureaucrat( void );
    Bureaucrat(const Bureaucrat&);
    
    ~Bureaucrat( void );
    // getter and setter
        /*getters*/
    int getGrade( void ) const ;
    std::string getName( void ) const;
        /*stters*/
        /// classs 
        class GradeTooHighException: public std::exception
        {
            const char* what() const throw();
        };
        class GradeTooLowException: public std::exception
        {
            const char* what() const throw();
        };
        //*----------*
     void incrementGrade(void);
     void decrementGrade(void);
    std::string signForm(Form &_form);
    void operator=(const Bureaucrat& old);
    /*End G and S*/
};


std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif