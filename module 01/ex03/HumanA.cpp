#include "HumanA.hpp"

void HumanA::attack(void)
{
    std::cout << _hunmA <<  " attacks with his " << _wep.get() << "\n";
}

HumanA::HumanA(std::string name, Weapon& wp) : _wep(wp)
{
    _hunmA = name;
}

HumanA::~HumanA( void )
{
    ;
}