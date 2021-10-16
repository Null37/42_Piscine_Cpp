#include "Karen.hpp"


void Karen::debug( void )
{
    std::cout << "DEBUG" << std::endl;
}

void Karen::info( void )
{
    std::cout << "INFO" << std::endl;
}


void Karen::warning( void )
{
    std::cout << "WARNING" << std::endl;
}

void Karen::error( void )
{
    std::cout << "ERROR" << "\n";
}

int     get_ind(std::string level)
{
    return ((int)level[0]);
}

typedef  void (Karen::*ll)(); 
// enum functions{DEBUG, INFO, WARNING, ERROR};
std::string cmd[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
void Karen::complain( std::string level)
// {
//     Karen::[4]= 
//     {
//         &Karen::debug,
//         &Karen::info,
//         &Karen::warning,
//         &Karen::error
//     };
    this->x = &Karen::debug;
    for(int i = 0; i <= 3; i++)
    {
        if (level == cmd[i])
            (this->*(x))();
    }
    // switch (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
    // {
    //     sda = (level == "DEBUG");
    //     case (sda) :
    //         std::cout << "l0";
    //     case level == "INFO" :
    //         std::cout << "l1";
    //     case level == "WARNING" :
    //         std::cout << "l2";
    //     case level == "ERROR" :
    //         std::cout << "l3";
    //         break ;
    // }
    // x[] = &Karen::debug;
    // x[] = &Karen::info;
    // x[] = &Karen::warning;
    // x[] = &Karen::error;
    // std::cout << DEBUG << std::endl;
    // std::cout << level << std::endl;
    // std::cout << ERROR << std::endl;
}

// #include <iostream> 
  
// using namespace std; 
  
// int main(int argc, const char * argv[]) 
// { 
//         enum class Colors 
//         { /*from   ww w .  j a  v  a 2s.c  om*/
//             Red, 
//             Green, 
//             Blue 
//         }; 
//         Colors color = Colors::Red; 
//         switch (color) 
//         { 
//             case Colors::Red: 
//                 { 
//                     cout << "The color is Red!"; 
//                 } 
//                 break; 
              
//             case Colors::Green: 
//                 { 
//                     cout << "The color is Green"; 
//                 } 
//                 break; 

//             default: 
//                 { 
//                     cout << "Unknown color!"; 
//                 } 
//                 break; 
//         } 
      
//         return 0; 
// }