#include "Form.hpp"

/* constructor ans setters */

Form::Form(void):Name("none_burea"), _signgrade(150), _exutegrade(150)
{
    std::cout << "FORM constructor default called " << std::endl;
    this->_signed = 0;
    if (this->_signgrade > 1 || this->_exutegrade > 1)
        throw GradeTooHighException();
    else if (this->_signgrade < 150 || this->_exutegrade < 150)
        throw GradeTooLowException();
}

Form::Form(std::string _name, int _sigrade, int  _exgrade, std::string target):
    Name(_name), _signgrade(_sigrade), _exutegrade(_exgrade)
{
    std::cout << "FROM constructor  called" << std::endl;
    if (this->_signgrade < 1 || this->_exutegrade < 1)
        throw GradeTooHighException();
    else if (this->_signgrade > 150 || this->_exutegrade > 150)
        throw GradeTooLowException();
    this->_signed = false;
    this->target = target;

}

Form::Form(const Form& old) : Name(old.Name), _signgrade(old._signgrade), _exutegrade(old._exutegrade)
{
    std::cout << "FORM copy constructor  called" << std::endl;
    this->_signed = old._signed;
}

Form::~Form()
{
    std::cout << "Form destructor called " << std::endl;
}

/* end C-D*/

/* getters and setters */

std::string Form::gettTarget(void) const
{
    return (this->target);
}

std::string Form::gettName( void ) const
{
    return (this->Name);
}

bool Form::gettsigned(void) const
{
    return (this->_signed);
}

int Form::getSigngrade( void ) const
{
    return this->_signgrade;
}

int Form::getExutegrade( void ) const
{
    return this->_exutegrade;
}

//             End g-s

/*        function      */
void Form::beSigned(Bureaucrat const& _bure)
{
    if (_bure.getGrade() <= this->_signgrade) {
        this->_signed = true;
        _bure.signForm(*this);
    }
    else {
        _bure.signForm(*this);
        throw GradeTooLowException();
    }
}

/* operators */

void Form::operator=(const Form& old)
{
    this->_signed = old._signed;
}

std::ostream &operator<<(std::ostream &output, const Form &old)
{
    output << "<" << old.gettName()  << ">" << ", Form signe grade " << "<" << old.getSigngrade() << ">" 
    <<  " grade to execute it " << "<" << old.getExutegrade()  << "> ";
    if (old.gettsigned() ==  false)
        std::cout << "Form is not sign it" << std::endl;
    else if (old.gettsigned() ==  true)
        std::cout << "Form is signed" << std::endl;
    return output;
}

/*      End oper    */


/// Overriding what function
const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{

    return "Grade is too LOW";
}