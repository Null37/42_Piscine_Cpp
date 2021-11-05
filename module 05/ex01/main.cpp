#include "Bureaucrat.hpp"
#include "Form.hpp"

int main( void )
{
    try
    {
        Bureaucrat _bu("battata", 1);
        Form  _f("hhh", 15, 15);
        _f.beSigned(_bu);
        std::cout << _f;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
}