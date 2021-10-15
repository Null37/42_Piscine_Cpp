#include "HumanB.hpp"
#include "Weapon.hpp"

void HumanB::attack(void)
{
    std::cout << _hunmB <<  " attacks with his " << _wep.get() << "\n";
}

HumanB::HumanB(std::string str)
{
    _hunmB = str;
}

HumanB::~HumanB()
{
    ;
}