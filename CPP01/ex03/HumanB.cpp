#include "HumanB.hpp"

HumanB::HumanB(std::string Name             ) : Name(Name), wp(0) { }

HumanB::HumanB(std::string Name, Weapon& obj) : Name(Name), wp(&obj   ) { }

void HumanB::attack()
{
    if(wp)
        std::cout << Name << " attacks with therir " << wp->getType() << std::endl;
    else
        std::cout << Name << " dont have a weapon "  << wp->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& Wp) 
{
    this->wp = &Wp; 
}
