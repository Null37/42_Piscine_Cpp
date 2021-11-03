#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat( void )
{
    std::cout << "Bureaucrat default constrator" << std::endl;
}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : Name(_name), Grade (_grade) 
{
    std::cout << "Bureaucrat constrator" << std::endl;
    if (this-> Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& old) : Name(old.Name)
{
    std::cout << "Bureaucrat copy constrator" << std::endl;
    *this = old;
}


Bureaucrat::~Bureaucrat( void )
{
    std::cout << "Bureaucrat destructor called" << std::endl;
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
    this->Grade--;   
    if (this-> Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::decrementGrade(void)
{
    this->Grade++;
    if (this-> Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}



const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too hight";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too LOW";
}

void Bureaucrat::operator=(const Bureaucrat& old)
{
    this->Grade = old.Grade;
      if (this-> Grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (this->Grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
    os << "<" << obj.getName()  << ">" << ", bureaucrat grade " << "<" << obj.getGrade() << ">" << std::endl;
    return os;
}

void Bureaucrat::signForm(Form &_form) const 
{
    if (_form.gettsigned() ==  true)
    {
        std::cout <<  "<" << this->Name << ">" << " signs "
                  << "<" << _form.gettName() <<  ">" <<std::endl;
    }
    else
      {
          std::cout <<  "<" << this->Name << ">" << " connot signs "
                  << "<" << _form.gettName() << ">"
                  << " because ";
        std::cout << "<" << "Grade tooo LOW"<< ">" << std::endl;
      }
}