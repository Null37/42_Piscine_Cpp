#include "Array.hpp"


int main()
{
    try
    { 
        Array<int> a(5);
        Array<int> b(5);
        std::cout << a.size() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
  
}