#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie *nz = new Zombie(name);
    if (nz == NULL)
        {
            std::cout << "Memory allocation failed\n";
            return NULL;
        }
    return nz;
}
