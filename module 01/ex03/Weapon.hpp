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
    Weapon(std::string type);
    ~Weapon(void){};
};


#endif