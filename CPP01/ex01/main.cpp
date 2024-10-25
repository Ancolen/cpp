#include "Zombie.hpp"

int main()
{

    Zombie* zombs = zombieHorde(5,"tot");
    
    std::cout << "hey" << std::endl;

    delete []zombs;
    
    return 0;
}
