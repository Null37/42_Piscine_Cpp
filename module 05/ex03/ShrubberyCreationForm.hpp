#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#define ShrubberyCreationForm SCF

class ShrubberyCreationForm :  public Form
{
public:
    /*  constructor and Destructor ---*/

    ShrubberyCreationForm( void );
    ShrubberyCreationForm( std::string target);
    ShrubberyCreationForm( const SCF& target);
    ~ShrubberyCreationForm();
    void execute(Bureaucrat const & executor) const;
    //    END C-D
};



#endif