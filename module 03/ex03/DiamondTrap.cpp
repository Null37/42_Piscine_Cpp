#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
    this->Name = Name;
    ClapTrap::Name = Name + "_clap_name";
    this->Hitpoints = FragTrap::get_default_value_hitpoint();
    this->Energy_points = ScavTrap::get_default_value_enrgy();
    this->Attack_damage = FragTrap::get_default_value_attack_damage();
}

DiamondTrap::DiamondTrap( void )
{
    std::cout << "default DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap( void )
{
    std::cout << "default DiamondTrap destruction called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& obj)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = obj;
}
void DiamondTrap::operator=(const DiamondTrap& oldj)
{
    this->Name = oldj.Name;
    this->Hitpoints = oldj.Hitpoints;
    this->Energy_points = oldj.Energy_points;
    this->Attack_damage = oldj.Attack_damage;
}

 void DiamondTrap::attack(std::string const &target)
 {
     ScavTrap::attack(target);
 }

 void DiamondTrap::whoAmI()
 {
     std::cout << "Diamond name: " << this->Name << " ClapTrap name: " << ClapTrap::Name << std::endl;
 }