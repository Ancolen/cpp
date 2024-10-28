





#include "ScavTrap.hpp"

ScavTrap::ScavTrap() { }

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
    std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}