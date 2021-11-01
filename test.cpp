#include <iostream>
#include <fstream>

int  main()
{
    std::string delimiter = "d";
    std::string a = "abcdo";
    int pos = a.find(delimiter);
    std::string token;
    token = a.substr(0, pos); 
    std::cout << token << std::endl;
     std::cout << a.find(delimiter);
     a.erase(0, pos + delimiter.length());
    std::cout << a;
}