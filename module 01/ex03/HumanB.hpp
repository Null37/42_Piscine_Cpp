#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
private:
        Weapon *_wep;
        std::string _hunmB;
public:
    void attack( void );
    HumanB(std::string str);
    void setWeapon(Weapon wp);
    ~HumanB();
};

#endif