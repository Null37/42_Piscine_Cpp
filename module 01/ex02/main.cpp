#include <iostream>


int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << &str << std::endl;
    std::cout << stringPTR << "\n" <<  &stringREF << "\n";
    std::cout << *stringPTR << "\n";
    std::cout << stringREF << "\n";
}