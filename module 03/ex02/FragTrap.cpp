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