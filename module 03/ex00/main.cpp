#include "ClapTrap.hpp"

int main()
{
    ClapTrap player1("battata");
    ClapTrap player2("jazara");
    player1.attack("jazara");
    player1.takeDamage(100);
    player2.takeDamage(10);
    player2.beRepaired(500);
    std::cout << "hp " << player2.get_hitpoint() << std::endl;
}