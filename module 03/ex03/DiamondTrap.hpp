#ifndef DIAMONDTRAP_GPP
#define DIAMONDTRAP_GPP

#include "FragTrap.hpp"

class DiamondTrap: public FragTrap,  public  ScavTrap
{
    private:
        std::string Name;
    public:
    DiamondTrap(std::string Name);
    DiamondTrap( void ){};
    ~DiamondTrap();
    
};




#endif