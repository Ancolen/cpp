#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << Name << ": " << Voice << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << Name << ": " << "im dieinggggg" << std::endl;
}

void Zombie::SetNameAndVoice(std::string name, std::string Voice)
{
    this->Name  = name ;
    this->Voice = Voice;
} 