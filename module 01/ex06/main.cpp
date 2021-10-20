#include "Karen.hpp"

int get_id(std::string str)
{
    std::string cmd[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;

    while (i < 4)
    {
       if (cmd[i] == str)
        return i;
        i++;
    }
    return -1;
}

int main(int ac, char *av[])
{
    if (ac != 2)
    {
        std::cout << "Error: an argument" << "\n";
        exit(1);
    }
    Karen karenfilter;
    int i = get_id(av[1]);
    switch (i)
    {
       case 0:
            std::cout << "[ DEBUG ]" << "\n";
            karenfilter.complain("DEBUG");
        case 1:
            std::cout << "[ INFO ]" << "\n";
            karenfilter.complain("INFO");
        case 2:
            std::cout << "[ WARNING ]" << "\n";
            karenfilter.complain("WARNING");
        case 3:
            std::cout << "[ ERROR ]" << "\n";
            karenfilter.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problem ]" << "\n";
    }
    
}