#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
   _wp = type;
}

const std::string& Weapon::get( void )
{
    return _wp;
}
void Weapon::set(std::string st)
{
    _wp = st;
}