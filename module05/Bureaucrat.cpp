#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name) : Name(_name)
{
    this->Grade = 150;
}

Bureaucrat::~Bureaucrat()
{

}

int Bureaucrat::getGrade( void ) const
{
    return this->Grade;
}

std::string Bureaucrat::getName( void ) const
{
    return this->Name;
}

void Bureaucrat::incrementGrade(void)
{
    
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << std::endl;
    return os;
}