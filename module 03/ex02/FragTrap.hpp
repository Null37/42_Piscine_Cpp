#ifndef FLAGTRAP_HPP
#define FLAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap(std::string Name);
    ~FragTrap();
    FragTrap(void);
    FragTrap(const FragTrap& oldj);
    void operator=(const FragTrap& oldj);
    void highFivesGuys( void );
};

#endif