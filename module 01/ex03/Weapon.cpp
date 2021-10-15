#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
   _wp = type;
}

const std::string& Weapon::get( void )
{
    return _wp;
}
void Weapon::setType(std::string st)
{
    _wp = st;
    std::cout << "han " << _wp << "\n";
}

Weapon::~Weapon( void )
{
    ;
}