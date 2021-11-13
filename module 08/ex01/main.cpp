#include "span.hpp"


int main()
{
    try
    {
        span v(5);
        v.addNumbe(5);
        v.addNumbe(3);
        v.addNumbe(17); 
        v.addNumbe(9);
        v.addNumbe(11);
        // v.addNumbe(1000);
        span v2 = v; 
        std::cout << v2.get_v()[0] << std::endl;
    //    std::cout <<  v.shortestSpan() << std::endl;
    //    std::cout <<  v.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

}