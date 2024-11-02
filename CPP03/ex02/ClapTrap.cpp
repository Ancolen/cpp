

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("default name")
{ 
    std::cout << "ClapTrap default ctor called" << std::endl; 
}

ClapTrap::ClapTrap(std::string name) : Name(name), hitPoints(10), energyPoints(10), attackDamage(0), isAlive(true)
{
    std::cout << "ClapTrap ctor called: " << this->Name << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called: " << this->Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    *this = copy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if(this != &other)
    {
        this->attackDamage = other.attackDamage;
        this->energyPoints = other.energyPoints;
        this->hitPoints    = other.hitPoints;
        this->isAlive      = other.isAlive;
        this->Name         = other.Name;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target)
{
    if(!this->isAlive)
    {
        std::cout << "ClapTrap " << this->Name << " cannot attack, it's already dead!" << std::endl;
        return;
    }
    if(this->getEnergyPoints() <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " cannot attack, no energy left" << std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);

    std::cout << "ClapTrap " << this->Name << " attacks " << target <<
    ", causing " << this->getAttackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(!this->isAlive)
    {
        std::cout << "ClapTrap " << this->Name << " cannot repair, it's already dead!" << std::endl;
        return;  
    }

    if(this->getEnergyPoints() <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " cannot repair, no energy left" << std::endl;
        return;
    }
    setEnergyPoints(getEnergyPoints() - 1);
    setHitPoints(getHitPoints() + amount);

    std::cout << "ClapTrap " << this->Name << " has been repaired: " << amount << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(!this->isAlive)
    {
        std::cout << "ClapTrap " << this->Name << " is already dead, cannot take more damage" << std::endl;
        return ;
    }
    setHitPoints(getHitPoints() - amount);
    if(getHitPoints() <= 0)
    {
        std::cout << "ClapTrap " << this->Name << " take damage: " << amount << std::endl;
        std::cout << "ClapTrap " << this->Name << " died." << std::endl;
        this->isAlive = false;
        return;
    }
    std::cout << "ClapTrap " << this->Name << " take damage: " << amount << std::endl;
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
    this->energyPoints = clamp(nbr, 0, MAX_ENERGY_POINTS);
}

void ClapTrap::setHitPoints(int nbr)
{
    this->hitPoints = clamp(nbr, 0, MAX_HIT_POINTS);
}

void ClapTrap::setAttackDamage(int nbr)
{
    this->attackDamage = clamp(nbr, 0, MAX_ATTACK_DAMAGE);
}
int clamp(int value, int minVal, int maxVal) {
    return std::max(minVal, std::min(value, maxVal));
}
