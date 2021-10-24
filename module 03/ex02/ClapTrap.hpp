#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
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
        void set_name(std::string Name);
        void set_hp(int hp);
        void set_energy_point(int en_p);
        void set_attack_damage(int  attak_damge);
        ClapTrap(std::string Name);
        ClapTrap( void );
        ClapTrap(const ClapTrap& oldj);
        void operator=(const ClapTrap& obj);
        ~ClapTrap( void );
};


#endif