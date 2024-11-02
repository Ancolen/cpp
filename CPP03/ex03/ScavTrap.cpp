





#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Unnamed ClapTrap")
{
    this->DefaultEnergyPoint = 50;
    setHitPoints(100);
    setEnergyPoints(this->DefaultEnergyPoint);
    setAttackDamage(30);
    std::cout << "ScavTrap default ctor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap ctor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    *this = copy;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    if(this != &other)
        ClapTrap::operator=(other);
    return *this;
}

void ScavTrap::attack(const std::string& target)
{
    if (!isAlive)
    {
        std::cout << "ScavTrap " << this->Name << " cannot attack, it's already dead!" << std::endl;
        return;
    }
    if (getEnergyPoints() <= 0)
    {
        std::cout << "ScavTrap " << this->Name << " has no energy left to attack!" << std::endl;
        return;
    }

    setEnergyPoints(getEnergyPoints() - 1);
    std::cout << "ScavTrap " << this->Name << " attacks " << target << ", causing " << getAttackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
    if(!isAlive)
        std::cout << "i cant dude, im dead" << std::endl;
    else if(energyPoints <= 0)
        std::cout << "i have no energy for keeping Gate keeper mode";
    else
        std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}