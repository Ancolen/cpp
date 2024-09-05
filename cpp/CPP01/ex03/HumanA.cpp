
#include "HumanA.hpp"
#include "Weapon.hpp"

void HumanA::attack()
{
    std::cout << Name << " attacks with therir " << wp << std::endl;
}

HumanA::HumanA(std::string Name, Weapon &obj)
{
    this->Name = Name;
    this->wp = obj.getType();
}
