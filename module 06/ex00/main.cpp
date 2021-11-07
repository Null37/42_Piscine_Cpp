#include <iostream>

char check_displayable(char c)
{
    
    if (c >= 33 && c < 126)
    {
        std::cout << c << std::endl;
        return c;
    }
    return 6;    
}

int main(int ac, char* av[])
{
    // std::cout << av[1] << std::endl;
    if (ac != 2)
    {
        std::cout << "ERROR: in arguments" << std::endl;
        return 1;
    }
    char a = static_cast<char>(av[1]);
    if (check_displayable(a) == 6)
    {
        std::cout << "non dis-playable characters can’t be passed as a paramete" << std::endl;
        return 1;
    }
    
}