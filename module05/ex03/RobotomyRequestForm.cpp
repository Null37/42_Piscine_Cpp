#include "RobotomyRequestForm.hpp"

/* getters and setter---*/

RobotomyRequestForm::RobotomyRequestForm( void ): Form("", 72, 45, "")
{
    std::cout << "RobotomyRequestForm default constructor  is called" << std::endl;

}

RRF::RobotomyRequestForm( std::string target ): Form("RobotomyRequestForm", 72, 45, target)
{
    std::cout << "RobotomyRequestForm constructor  is called" << std::endl;
}

RRF::RobotomyRequestForm( const RRF& _RRF ):Form(_RRF.gettName(), _RRF.getSigngrade(), _RRF.getExutegrade(), _RRF.gettTarget())
{

}
RobotomyRequestForm::~RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm destructor is called" << std::endl;
}
// END g-s


void RRF::execute(Bureaucrat const & executor) const
{
    srand(time(0));

    int randNum = rand();
    if (this->gettsigned() == true)
    {
        if (executor.getGrade() <= this->getExutegrade())
        {
            if (randNum % 2)
                std::cout << "<" << this->gettTarget() << ">" <<  " has been robotomized successfully" << std::endl;
            else
                std::cout << "<" << this->gettTarget() << ">" <<  " is a failure"<< std::endl;
        }
       else
            throw Form::GradeTooLowException();
    }
    else
        throw Form::GradeTooLowException();
}