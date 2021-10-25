#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    {
        ClapTrap player1("battata");
        ClapTrap player2("jazara");
        player1.attack("jazara");
        player1.takeDamage(100);
        player2.takeDamage(10);
        player2.beRepaired(500);
        std::cout << "hp " << player2.get_hitpoint() << std::endl;
    }

    {
        ScavTrap Scavplayer1("Serena");
        Scavplayer1.attack("Monster");
        Scavplayer1.takeDamage(20);
        Scavplayer1.beRepaired(1000);
        Scavplayer1.guardGate();
        std::cout << "hp " << Scavplayer1.get_hitpoint() << std::endl;
    }

    {
        FragTrap fragplayer1("magic_frag");
        fragplayer1.highFivesGuys();
    }
    
    {
        DiamondTrap playerDi("diamond");
        playerDi.whoAmI();
        playerDi.highFivesGuys();
        playerDi.attack("lola");
    }
}