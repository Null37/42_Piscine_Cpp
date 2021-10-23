#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std:string Name;
        int Hitpoints;
        int Energy_points
        int Attack_damage;
    public:
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        ClapTrap(std::string Name);
        ~ClapTrap();
};


#endif