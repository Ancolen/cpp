

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string Name;
public:
    std::string weapon;
    void attack();
    void setWeapon(Weapon obj);
    HumanB(std::string Name);
    HumanB(std::string Name, Weapon obj);
    // ~HumanB();
};
