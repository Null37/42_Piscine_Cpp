#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
    std::string name;
public:
        void announce( void );
        Zombie(std::string name);
        ~Zombie( void );
        void set(std::string name);
        std::string get( void );
};


Zombie* newZombie( std::string name );
void randomChump( std::string name );



#endif