

#pragma once
#include <iostream>

class ClapTrap
{
private:
    std::string Name;
    int hitPoints ;
    int energyPoints ;
    int attackDamage ;
public:
    ClapTrap(std::string Name);
    ~ClapTrap();

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    void setHitPoints(int nbr);
    void setEnergyPoints(int nbr);
    void setAttackDamage(int nbr);
    
    int getAttackDamage();
    int getHitPoints();
    int getEnergyPoints();
};
