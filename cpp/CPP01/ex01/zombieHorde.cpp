

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name )
{
    Zombie* zombs = new Zombie[N];

    while(N >= 0)
    {
        zombs[N].SetNameAndVoice(name, "BraiiiiiiinnnzzzZ...");
        zombs[N].announce();
        N--;
    }
    return zombs;
}