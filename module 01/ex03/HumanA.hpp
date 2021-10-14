#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
private:
        Weapon _wep;
        std::string _hunmA;
public:
    void attack( void );
    HumanA(std::string name, Weapon& wp);
    ~HumanA( void );
};

#endif