#include "Zombie.hpp"
#include <iostream>

int  main()
{
    Zombie z = Zombie("kat");
    Zombie *s;
    randomChump("ls");
    s = newZombie("batata");
    if (s == NULL)
        return 1;
    delete s;
    return 0;
}