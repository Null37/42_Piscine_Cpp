#include "zombie.hpp"

void Zombie::announce( void )
{
    std::cout << name;
    std::cout << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string n)
{
    name = n;
    announce();
}

Zombie* newZombie( std::string name )
{
    Zombie *nz = new Zombie(name);
    return nz;
}
void Zombie::randomChump( std::string name )
{
    Zombie rdz(name);
}