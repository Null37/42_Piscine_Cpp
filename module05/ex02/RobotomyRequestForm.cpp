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