#include "Zombie.hpp"
#include <iostream>

int  main()
{
    Zombie z = Zombie("kat");
    Zombie *s;
    s = zombieHorde(10, "batata");
    if (s == NULL)
        return 1;
    delete[] s;
    return 0;
}