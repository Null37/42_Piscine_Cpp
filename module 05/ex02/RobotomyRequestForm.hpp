#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#define RobotomyRequestForm RRF

class RobotomyRequestForm : public Form
{
public:
    /*  constructor and Destructor ---*/

    RobotomyRequestForm( void );
    RobotomyRequestForm( std::string target );
    RobotomyRequestForm( const RRF&);
    ~RobotomyRequestForm();
    void execute(Bureaucrat const & executor) const;
    // END C-D
};


#endif

