

#pragma once

#include <iostream>

#define MAX_HIT_POINTS    100
#define MAX_ATTACK_DAMAGE 100
#define MAX_ENERGY_POINTS 100

class ClapTrap
{
protected:
    std::string Name;

    int hitPoints ;
    int energyPoints ;
    int attackDamage ;

    bool isAlive;

public:
    ClapTrap();
    ClapTrap(std::string Name);
   
    ClapTrap(const ClapTrap& copy);

    ClapTrap& operator=(const ClapTrap& other);

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
int clamp(int value, int minVal, int maxVal);