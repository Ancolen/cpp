






#include "ClapTrap.hpp"




int main()
{
    // Create a ClapTrap object
    ClapTrap clap("Clapster");

    // Set attack damage
    clap.setAttackDamage(3);

    // Test attack
    clap.attack("Target1");
    clap.attack("Target2");

    // Test take damage
    clap.takeDamage(5);
    clap.takeDamage(10);  // Should set hit points to 0

    // Try to attack with 0 hit points
    clap.attack("Target3");

    // Test repairing
    clap.beRepaired(5);  // Should repair hit points by 5

    // Attack and repair until energy runs out
    for (int i = 0; i < 10; i++) {
        clap.attack("Another Target");
        clap.beRepaired(2);
    }

    return 0;

}