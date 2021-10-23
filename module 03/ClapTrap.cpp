#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "-*-*- Constructor called -*-*-" << "\n";
    this->Name = Name;
    this->Hitpoints = 10;
    this->Attack_damage = 0;
    this->Energy_points = 10;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "-*-*- distructor called -*-*-" << "\n";
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->Name << " attack " << target << ", causing " << Attack_damage << " points of damage!" << "\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << Name << " take damge " << amount << std::endl;
    if (amount < (unsigned int)Hitpoints)
        Hitpoints -= amount;
    else
        Hitpoints = 0;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << Name << " Heal herself " <<  "+" << amount  << std::endl;
    Hitpoints += amount;
}

std::string ClapTrap::get_name( void )
{
    return Name;
}

// // // // // // // // // :3
void ClapTrap::set_name( std::string name )
{
    Name = name;
}

int ClapTrap::get_hitpoint( void )
{
    return Hitpoints;
}

void ClapTrap::set_hitpoint( int hp )
{
    Hitpoints = hp;
}

int ClapTrap::get_energy_point( void )
{
    return Energy_points;
}

void ClapTrap::set_energy_point( int ep )
{
    Energy_points = ep;
}

int ClapTrap::get_Attack_damage( void )
{
    return Attack_damage;
}

void ClapTrap::set_Attack_damage( int damage )
{
    Attack_damage = damage;
}
// // // // // // // // // :3