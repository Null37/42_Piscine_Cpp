#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP


#include <iostream>

class Bureaucrat
{
private:
    const std::string Name;  
    int Grade; // range form 1 to 150
public:
    Bureaucrat(std::string _name);
    ~Bureaucrat();
    // getter and setter
        /*getters*/
    int getGrade( void ) const ;
    std::string getName( void ) const;
        /*stters*/
    void incrementGrade(void);
    void decrementGrade(void);
    /*End G and S*/
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);




#endif