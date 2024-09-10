#include "Zombie.hpp"

void Zombie::announce()
{
    std::cout << Name << ": " << Voice << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << Name << ": " << "öldüm ben alla emanet" << std::endl;
}

void Zombie::SetNameAndVoice(std::string name, std::string Voice)
{
    this->Name = name;
    this->Voice = Voice;
} 