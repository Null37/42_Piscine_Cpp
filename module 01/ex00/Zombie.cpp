#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << "<" << name << ">";
    std::cout << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string n)
{
    name = n;
    announce();
}

Zombie::~Zombie()
{
    std::cout << "hooray" << " " << "<" << name << ">" << " die" << "\n";
}
