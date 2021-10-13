#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostram>

class Weapon
{
private:
    std::string type;
public:
    const std::string& get( void );
    void set(std::string st);
};


#endif