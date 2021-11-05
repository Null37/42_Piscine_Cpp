#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main( void )
{
    // try
    // {

    //     // Bureaucrat _bu("battata", 137);
    //     // SCF type_scf("sher");
    //     // type_scf.beSigned(_bu);
    //     // type_scf.execute(_bu);
    //     // _bu.executeForm(type_scf);
    //     // PPF type_ppf("sher");
    //     // type_ppf.beSigned(_bu);
    //     // type_ppf.execute(_bu);
    //     // RRF type_ppf("sher");
    //     // type_rrf.beSigned(_bu);
    //     // type_rff.execute(_bu);
    // }
    // catch (std::exception & e)
    // {
    //     std::cout << e.what() << std::endl;
    // }
    {
    Intern someRandomIntern;
    Form* rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}
}