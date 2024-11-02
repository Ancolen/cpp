






#include "ClapTrap.hpp"




int main()
{
    ClapTrap clap("Clapster");

    // Set attack damage
    clap.setAttackDamage(3);

    // Test attack
    clap.attack("Target1");
    clap.attack("Target2");

    // Test take damage
    clap.takeDamage(5);
    clap.takeDamage(4);

    clap.attack("Target3");

 
    clap.beRepaired(5);
    clap.takeDamage(6);

    // Attack and repair until energy runs out
    clap.attack("Another Target");
    clap.beRepaired(2);

    return 0;

}