#include "ClapTrap.hpp"

void ClapTrap::set_name(std::string Name)
{
    this->Name = Name;
}

void ClapTrap::set_hp(int hp)
{
    this->Hitpoints = hp;
}

void ClapTrap::set_energy_point(int en_p)
{
    this->Energy_points = en_p;
}

void ClapTrap::set_attack_damage(int attak_damage)
{
    this->Attack_damage = attak_damage;
}

ClapTrap::ClapTrap( void )
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
}

void ClapTrap::operator=(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

ClapTrap::ClapTrap(const ClapTrap& oldj)
{
    std::cout << "ClapTrap Copy constructor called" << std::endl;
    *this = oldj;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "-*-*- ClapTrap Constructor called -*-*-" << "\n";
    this->Name = Name;
    this->Hitpoints = 10;
    this->Attack_damage = 0;
    this->Energy_points = 10;
}

ClapTrap::~ClapTrap( void )
{
    std::cout << "-*-*- ClapTrap distructor called -*-*-" << "\n";
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

int ClapTrap::get_hitpoint( void )
{
    return Hitpoints;
}

int ClapTrap::get_energy_point( void )
{
    return Energy_points;
}

int ClapTrap::get_Attack_damage( void )
{
    return Attack_damage;
}