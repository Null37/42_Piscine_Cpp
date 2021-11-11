#include <iostream>
#include "iter.hpp"

template<typename T>
void print(T i)
{
    std::cout << i << std::endl;
}

int main()
{
    {
        std::cout << "-----------------table float ------------------" << std::endl;
        float ftap[5] = {0.5, 8.4, 9.8, 3.7, 4.5};
        iter(ftap, 5, print);
    }
    {
        std::cout << "-----------------table int ------------------" << std::endl;
        int Itap[5] = {0, 8, 19, 37, 46};
        iter(Itap, 5, print);
    }
   {
    std::cout << "-----------------table string ------------------" << std::endl;
    std::string Stap[5] = {"hello", "word", "random", "ok", "batata"};
    iter(Stap, 5, print);
   }
    return 0;
}