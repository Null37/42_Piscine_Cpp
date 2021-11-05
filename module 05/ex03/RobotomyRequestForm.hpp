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
    // END C-D
    void execute(Bureaucrat const & executor) const;
    static Form* create(const std::string target);
};


#endif

