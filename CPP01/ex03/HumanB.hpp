#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
    std::string Name                               ;
    Weapon*     wp                                 ;
public:
    void attack    (                             ) ;
    void setWeapon (Weapon&     wp               ) ;
         HumanB    (std::string Name             ) ;
         HumanB    (std::string Name, Weapon& obj) ;
};
