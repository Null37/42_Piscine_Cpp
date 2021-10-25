#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(std::string Name)
{
    std::cout << "DiamondTrap constructor called" << std::endl;
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

