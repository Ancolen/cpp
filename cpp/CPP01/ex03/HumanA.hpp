
#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string Name;
    std::string wp;
public:
    void attack();
    HumanA(std::string Name, Weapon &obj);
    // ~HumanA();
};
