#ifndef DIAMONDTRAP_GPP
#define DIAMONDTRAP_GPP

#include "FragTrap.hpp"

class DiamondTrap: public FragTrap,  public  ScavTrap
{
    private:
        std::string Name;
    public:
    DiamondTrap(std::string Name);
    DiamondTrap(const DiamondTrap& obj);
    void operator=(const DiamondTrap& oldj);
    DiamondTrap( void );
    ~DiamondTrap();
};


#endif