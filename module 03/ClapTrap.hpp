#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
    public:
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_name( void );
        int get_hitpoint( void );
        int get_energy_point( void );
        int get_Attack_damage( void );

        // // // // // // :3
        void set_name( std::string name );
        void set_hitpoint( int hp );
        void set_energy_point( int ep );
        void set_Attack_damage( int damage );
        // // // // // // :3

        ClapTrap(std::string Name);
        ~ClapTrap( void );
};


#endif