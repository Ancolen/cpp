#include "Zombie.hpp"

Zombie::Zombie(std::string Name)
{
    this->Name = Name;
    Voice = ": BraiiiiiiinnnzzzZ..."; 
    announce(); 
}
void Zombie::announce(void)
{
    std::cout << Name << " "  << Voice          << std::endl; 
}

Zombie::~Zombie()
{
    std::cout << Name << ": " << "im dieingggg" << std::endl;
}