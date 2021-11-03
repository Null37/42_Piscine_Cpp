#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat _bu("battata", 25);
        Form  _f("hhh", 15, 15);
        _f.beSigned(_bu);
        // _bu.signForm(_f);
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}