#include <iostream>

int main(int ac, char *av[])
{
    if (ac ==1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
        return 1;
    }       
    for(int i = 1; av[i]; i++)
    {
       for(int j = 0; av[i][j];j++)
       {
           char ch = toupper(av[i][j]);
           std::cout <<  ch;  
       }
       if (i != ac - 1)
        std::cout  << " ";
    }
    std::cout << "\n";
    return 0;
}
