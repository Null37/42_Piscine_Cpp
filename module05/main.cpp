#include "Bureaucrat.hpp"


int main( void )
{
    try
    {
        Bureaucrat _bu("battata", 150);
        std::cout << "-----------------1-------------------------" << std::endl;
        std::cout << _bu;
        std::cout << "----------------------2--------------------" << std::endl;
       _bu.incrementGrade();
         std::cout << _bu.getGrade() << std::endl;
          std::cout << _bu.getName() << std::endl;
        std::cout << "-----------------------3------------------" << std::endl;
        _bu.decrementGrade();
        std::cout << _bu.getGrade() << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }

}