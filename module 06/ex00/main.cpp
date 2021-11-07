#include <iostream>
#include "convert.hpp"
#include <iomanip>


int main(int ac, char* av[])
{
    // std::cout << av[1] << std::endl;
    if (ac != 2)
    {
        std::cout << "ERROR: in arguments" << std::endl;
        return 1;
    }
    std::string str = av[1];
    convert conv(str);
    try
    {
        std::setprecision(1);
        std::cout << "float: " << static_cast<float>(conv) << std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
        std::cout << "impossible" << std::endl;
    }
    
    try
    {
        std::cout << "int: " << static_cast<int>(conv) << std::endl;
    }
    catch(std::exception &e)
    {
        (void)e;
        std::cout << "impossible" << std::endl;
    }
}