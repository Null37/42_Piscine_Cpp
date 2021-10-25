#include "ScavTrap.hpp"


ScavTrap::ScavTrap( void )
{
    std::cout << "Default scavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& oldj)
{
    *this = oldj;
    std::cout << "Copy Construction called" << std::endl;
   
}

void ScavTrap::operator=(const ScavTrap& oldj)
{
   std::cout <<  "assignment opertator called" << std::endl;
    this->Name = oldj.Name;
    this->Hitpoints = oldj.Hitpoints;
    this->Attack_damage = oldj.Attack_damage;
    this->Energy_points = oldj.Energy_points;
}

ScavTrap::ScavTrap(std::string Name): ClapTrap(Name)
{
    std::cout << "Construction ScavTrap Called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 50;
    this->Attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
    std::cout << "Destruction ScavTrap called" << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "SclapTrap " << this->Name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << "\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->Name  << " have enterredin Gate keeper mode" << std::endl;
}

std::string ScavTrap::get_name( void )
{
    return (this->Name);
}

int ScavTrap::get_hitpoint( void )
{
    return (this->Hitpoints);
}

int ScavTrap::get_energy_point( void )
{
    return(this->Energy_points);
}

int ScavTrap::get_Attack_damage( void )
{
   return (this->Attack_damage);
}

void ScavTrap::set_name(std::string Name)
{
    this->Name = Name;
}

void ScavTrap::set_hp(int hp)
{
    this->Hitpoints = hp;
}

void ScavTrap::set_energy_point(int en_p)
{
    this->Energy_points = en_p;
}

void ScavTrap::set_attack_damage(int  attak_damge)
{
    this->Attack_damage = attak_damge;  
}