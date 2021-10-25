#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
    std::cout << "FragTrap construction called" << std::endl;
    this->Name = Name;
    this->Hitpoints = 100;
    this->Energy_points = 100;
    this->Attack_damage = 30;
}

FragTrap::FragTrap( void )
{
    std::cout << "Default construction called" << std::endl;
}

 void FragTrap::operator=(const FragTrap& oldj)
 {
    std::cout <<  "assignment opertator called" << std::endl;
    this->Name = oldj.Name;
    this->Hitpoints = oldj.Hitpoints;
    this->Attack_damage = oldj.Attack_damage;
    this->Energy_points = oldj.Energy_points;
 }

FragTrap::FragTrap(const FragTrap& oldj)
{
    std::cout << "Copy Construction called" << std::endl;
    *this = oldj;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destruction called" << std::endl;
}


void FragTrap::highFivesGuys( void )
{
    std::cout << "Hight Five Guys" << std::endl;
}

std::string FragTrap::get_name( void )
{
    return (this->Name);
}

int FragTrap::get_hitpoint( void )
{
    return (this->Hitpoints);
}

int FragTrap::get_energy_point( void )
{
    return(this->Energy_points);
}

int FragTrap::get_Attack_damage( void )
{
   return (this->Attack_damage);
}

void FragTrap::set_name(std::string Name)
{
    this->Name = Name;
}

void FragTrap::set_hp(int hp)
{
    this->Hitpoints = hp;
}

void FragTrap::set_energy_point(int en_p)
{
    this->Energy_points = en_p;
}

void FragTrap::set_attack_damage(int  attak_damge)
{
    this->Attack_damage = attak_damge;  
}