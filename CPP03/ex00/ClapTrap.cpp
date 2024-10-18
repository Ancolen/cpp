

#include "ClapTrap.hpp"



ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ctor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if(this->getHitPoints() <= 0 || this->getEnergyPoints() <= 0)
    {
        std::cerr << "ClapTrap " << this->Name << " cannot attack, no hit point or energy left" << std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);

    std::cout << "ClapTrap " << this->Name << " attacks " << target <<
    ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->getHitPoints() <= 0)
    {
        std::cerr << "ClapTrap " << this->Name << " cannot repair, it's already dead!" << std::endl;
        return;  
    }

    if(this->getEnergyPoints() <= 0)
    {
        std::cerr << "ClapTrap " << this->Name << " cannot repair, no energy left" << std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);
    setHitPoints(getHitPoints() + amount);

    std::cout << "ClapTrap " << this->Name << " has been repaired" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    setHitPoints(getHitPoints() - amount);
    if(getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " öldü bu" << std::endl;
        return;
    }
    std::cout << "ClapTrap " << this->Name << "take damage: " << amount << std::endl;
}


int ClapTrap::getEnergyPoints()
{
    return this->energyPoints;
}

int ClapTrap::getHitPoints()
{
    return this->hitPoints;
}

int ClapTrap::getAttackDamage()
{
    return this->attackDamage;
}

void ClapTrap::setEnergyPoints(int nbr)
{
    this->energyPoints = nbr;
}

void ClapTrap::setHitPoints(int nbr)
{
    this->hitPoints = nbr;
}

void ClapTrap::setAttackDamage(int nbr)
{
    this->attackDamage = nbr;
}