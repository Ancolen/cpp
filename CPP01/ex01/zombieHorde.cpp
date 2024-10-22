#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie* zombs = new Zombie[N];

    int i = 0;

    while(i < N)
    {
        zombs[i].SetNameAndVoice(name, "BraiiiiiiinnnzzzZ...");
        zombs[i].announce();
        i++;
    }
    return zombs;
}

//5-4-3-2-1