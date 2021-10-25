#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
    ScavTrap(std::string Name);
    ScavTrap( void );
    ScavTrap(const ScavTrap& oldj);
    ~ScavTrap();
    void operator=(const ScavTrap& oldj);
    void attack(std::string const &target);
    std::string get_name( void );
    int get_hitpoint( void );
    int get_energy_point( void );
    int get_Attack_damage( void );
    void set_name(std::string Name);
    void set_hp(int hp);
    void set_energy_point(int en_p);
    void set_attack_damage(int attak_damge);
    int get_default_value_hitpoint(void);
    int get_default_value_enrgy(void);
    int get_default_value_attack_damage(void);
    void guardGate();
};

#endif