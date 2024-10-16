#include "Zombie.hpp"

Zombie* newZombie(std::string Name)
{
    Zombie* zombie = new Zombie(Name);
    return zombie;
}