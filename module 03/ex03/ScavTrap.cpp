#include "ScavTrap.hpp"


ScavTrap::ScavTrap( void )
{
    std::cout << "Default scavTrap constructor called" << std::endl;
}



ScavTrap::ScavTrap(const ScavTrap& oldj)
{
    std::cout << "Copy Construction called" << std::endl;
    this->Name = oldj.Name;
    this->Hitpoints = oldj.Hitpoints;
    this->Attack_damage = oldj.Attack_damage;
    this->Energy_points = oldj.Energy_points;
}

void ScavTrap::operator=(const ScavTrap& obj)
{
   std::cout <<  "assignment opertator called" << std::endl;
   *this = obj;
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