#include "Karen.hpp"


void Karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}


void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << "\n";
}

void Karen::complain( std::string level)
{
    void (Karen::*ptr[4])();

    ptr[0] = &Karen::debug;
    ptr[1] = &Karen::info;
    ptr[2] = &Karen::warning;
    ptr[3] = &Karen::error;


    std::string cmd[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    while (i < 4)
    {
        while (cmd[i] == level)
        {
            (this->*ptr[i])();
            break ;
        }
        i++;
    }
}