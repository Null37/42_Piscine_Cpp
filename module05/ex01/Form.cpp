#include "Form.hpp"

/* constructor ans setters */

Form::Form(void):Name("none_burea"), _signgrade(150), _exutegrade(150)
{
    std::cout << "FORM constructor default called " << std::endl;
    this->_signed = 0;
}

Form::Form(std::string _name, int _sigrade, int  _exgrade):
    Name(_name), _signgrade(_sigrade), _exutegrade(_exgrade)
{
    std::cout << "FROM constructor  called" << std::endl;
    this->_signed = 0;
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
void Form::beSigned(Bureaucrat _bure)
{

}

/* operators */

void Form::operator=(const Form& old)
{
    this->_signed = old._signed;
}

std::ostream &operator<<( std::ostream &output, const Form &old)
{
    
}

/*      End oper    */
