
#include "Zombie.hpp"

int main()
{

    Zombie* zombs = zombieHorde(5,"tot");
    std::cout << "deneme2" << std::endl;
    delete []zombs;
    return 0;
}
