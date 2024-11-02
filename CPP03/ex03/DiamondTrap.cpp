

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), Name("Default")
{
    FragTrap f;
    ScavTrap s;
    
    hitPoints    = f.getHitPoints   ();
    energyPoints = s.getEnergyPoints();
    attackDamage = f.getAttackDamage();
    isAlive      = true;

    std::cout << "DiamondTrap default ctor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), Name(name)
{
    FragTrap f;
    ScavTrap s;

    hitPoints    = f.getHitPoints   ();
    energyPoints = s.getEnergyPoints();
    attackDamage = f.getAttackDamage();
    isAlive      = true;

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

        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
        hitPoints    = other.hitPoints   ;
        isAlive      = other.isAlive     ;
        Name         = other.Name        ;
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
