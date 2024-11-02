

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), Name("Default")
{
    hitPoints = FragTrap::DefaultHitPoint;
    energyPoints = ScavTrap::DefaultEnergyPoint;
    attackDamage = FragTrap::DefaultAttackPoint;
    isAlive = true;
    std::cout << "DiamondTrap default ctor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), Name(name)
{
    hitPoints = FragTrap::hitPoints;
    energyPoints = ScavTrap::energyPoints;
    attackDamage = FragTrap::attackDamage;
    isAlive = true;
    std::cout << "DiamondTrap ctor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
    *this = copy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if(this != &other)
    {
        ClapTrap::operator=(other);

        Name = other.Name;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
        hitPoints = other.hitPoints;
        isAlive = other.isAlive;
    }
    return *this;
    
}


DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "ClapTrap name: "    << ClapTrap::Name << std::endl;
    std::cout << "DiamondTrap name: " << Name           << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}
