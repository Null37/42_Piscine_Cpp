#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string Name);
    ~FragTrap();
    FragTrap(void);
    FragTrap(const FragTrap& oldj);
    void operator=(const FragTrap& oldj);

    void highFivesGuys( void );

    std::string get_name( void );
    int get_hitpoint( void );
    int get_energy_point( void );
    int get_Attack_damage( void );

    void set_name(std::string Name);
    void set_hp(int hp);
    void set_energy_point(int en_p);
    void set_attack_damage(int attak_damge);
};

#endif