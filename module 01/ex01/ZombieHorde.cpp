#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *hz = new Zombie[N];
    if (hz == NULL)
        return (NULL);
    for (int i = 0; i < N; i++)
    {
        hz[i].set(name);
        hz[i].announce();
    }
    return hz;
}