
#include "Zombie.hpp"

int main()
{

    Zombie* zombs = zombieHorde(5,"akif");
    delete []zombs;
    return 0;
}
