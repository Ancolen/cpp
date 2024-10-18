
#include "Zombie.hpp"

int main()
{

    Zombie* zombs = zombieHorde(5,"tot");
    delete []zombs;
    return 0;
}
