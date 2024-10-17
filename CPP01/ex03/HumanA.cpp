#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string Name, Weapon& obj) : Name(Name), wp(obj) { }

void HumanA::attack() 
{
     std::cout << Name << " attacks with therir " << wp.getType() << std::endl; 
}
