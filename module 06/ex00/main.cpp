#include <iostream>
#include "convert.hpp"
#include <iomanip>


int main(int ac, char* av[])
{
    // std::cout << av[1] << std::endl;
    if (ac != 2)
    {
        std::cout << "ERROR: in arguments -add argmunt-" << std::endl;
        return 1;
    }
    std::string str = av[1];
    convert conv(str);
    try
    {
        std::cout << static_cast<char>(conv) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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
    try
    {
        std::cout.precision(1);
        std::cout << "float: " << std::fixed << static_cast<float>(conv) <<  'f' << std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
        std::cout << "impossible" << std::endl;
    }
    try
    {
        std::cout.precision(1);
        std::cout << "double: " << std::fixed << static_cast<double>(conv) <<  std::endl;
    }
    catch(std::exception& e)
    {
        (void)e;
        std::cout << "impossible" << std::endl;
    }
}