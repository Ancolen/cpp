
#include "HumanB.hpp"


void HumanB::attack()
{
    std::cout << Name << " attacks with therir " << weapon << std::endl;
}


HumanB::HumanB(std::string Name)
{
    this->Name = Name;
}

HumanB::HumanB(std::string Name, Weapon obj)
{
    this->Name = Name;
    this->weapon = obj.getType();
}

void HumanB::setWeapon(Weapon obj)
{
    this->weapon = obj.getType();
}