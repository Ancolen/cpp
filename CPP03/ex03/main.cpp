#include "DiamondTrap.hpp"
#include <iostream>

int main()
{
    std::cout << "\n--- Creating DiamondTrap 'diamond' ---\n";
    DiamondTrap diamond("diamond");

    std::cout << "\n--- Testing DiamondTrap 'diamond' Properties ---\n";
    std::cout << "Name: " << "diamond\n";
    std::cout << "Hit Points (from FragTrap): " << diamond.getHitPoints() << "\n";
    std::cout << "Energy Points (from ScavTrap): " << diamond.getEnergyPoints() << "\n";
    std::cout << "Attack Damage (from FragTrap): " << diamond.getAttackDamage() << "\n";

    std::cout << "\n--- Testing attack() Function (using ScavTrap's attack) ---\n";
    diamond.attack("target");

    std::cout << "\n--- Testing whoAmI() Function ---\n";
    diamond.whoAmI();

    std::cout << "\n--- Testing Copy Constructor and Assignment Operator ---\n";
    DiamondTrap copyDiamond = diamond;  // Copy constructor
    DiamondTrap assignedDiamond;
    assignedDiamond = diamond;          // Assignment operator

    std::cout << "\n--- Destruction Begins ---\n";

    return 0;
}
