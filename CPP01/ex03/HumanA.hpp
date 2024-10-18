#pragma once
#include <iostream>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string  Name                     ;
    Weapon       &wp                      ;
    
public:
    void attack()                         ;
    HumanA(std::string Name, Weapon& obj) ;
};
