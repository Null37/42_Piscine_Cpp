#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
private:
    std::string _wp;
public:
    const std::string& get( void );
    void set(std::string st);
};


#endif