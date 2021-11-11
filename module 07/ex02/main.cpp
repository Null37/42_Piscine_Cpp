#include <iostream>
#include "Array.hpp"

int main()
{
    try
    {
        Array<int> tap(5);
        Array<float> tap2(10);

        std::cout << "*******------------test size--------------------***" << std::endl;
        std::cout << "size tap 1 === " << tap.size() << std::endl;
        std::cout << "*******---------------test size -------------***" << std::endl;
        std::cout << "size tap 2 === " << tap2.size() << std::endl;
        std::cout << "*******-----------test value ------------***" << std::endl;
        tap[0] = 33;
        tap2[0] = 30000;
        std::cout << "value tap1 === " << tap[0] << std::endl;
        std::cout << "value tap1 === " << tap2[0] << std::endl;
        std::cout << "*******--------------test out of range-------------***" << std::endl;
       // std::cout << tap[-1] << std::endl;
       // std::cout << "sucss" << std::endl;
        std::cout << "*******--------------test copy value-------------***" << std::endl;
        Array<int> cp(tap);
        std::cout << "copy value== " << cp[0] << std::endl; 
    }
    catch (std::exception &e)
    {
        std::cout << "Error catch " << e.what() << std::endl;
    }
}