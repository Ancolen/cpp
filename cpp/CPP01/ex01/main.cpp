
#include "Zombie.hpp"

int main(int argc, char const *argv[])
{

    Zombie* zombs = zombieHorde(5,"akif");
    delete []zombs;
    return 0;
}
