#include "FragTrap.hpp"

int main()
{
    std::cout << "Creating a FragTrap named \"Hero\"...\n";
    FragTrap hero("Hero");

    std::cout << "\nTesting initial state of FragTrap...\n";
    hero.attack("Target Dummy");
    hero.highFiveGuys();

    std::cout << "\nTesting damage, repair, and energy...\n";
    hero.takeDamage(90);      // Büyük hasar alarak yüksekten düşme testi
    hero.beRepaired(20);      // Onarım yap
    hero.takeDamage(30);      // Canını sıfıra indirme testi
    hero.highFiveGuys();      // Öldükten sonra highFiveGuys çağırma

    std::cout << "\nTesting repeated attacks and energy depletion...\n";
    FragTrap energyTest("Energy Test");
    for (int i = 0; i < 100; ++i)   // Enerji bitene kadar saldır
    {
        energyTest.attack("Energy Dummy");
    }
    energyTest.highFiveGuys();  // Enerji tükendiğinde highFiveGuys çağırma

    std::cout << "\nTesting copy constructor and assignment operator...\n";
    FragTrap original("Original");
    FragTrap copyTarget("Copy Target");
    copyTarget = original;      // Atama operatörünü test et
    copyTarget.attack("Assigned Copy");

    std::cout << "\nEnd of tests - destructors will be called for all FragTraps\n";
    return 0;
}
