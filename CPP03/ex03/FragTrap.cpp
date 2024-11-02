

#include "FragTrap.hpp"



FragTrap::FragTrap() : ClapTrap("Unnamed FragTrap")
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);

    std::cout << "FragTrap default ctor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);

    std::cout << "FragTrap ctor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    *this = copy;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
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

void FragTrap::highFiveGuys(void)
{
    if (!isAlive)
        std::cout << "I cant, dude. Im dead!" << std::endl;
    else if (energyPoints <= 0)
        std::cout << "I have no energy left for a high five!" << std::endl;
    else
        std::cout << "High Five, guys!" << std::endl;
}

