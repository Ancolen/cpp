






#include "ScavTrap.hpp"




int main()
{
    // ScavTrap nesnesi oluştur
    ScavTrap scav("Scavenger");

    // Başlangıç durumu: ScavTrap özelliklerini kontrol et
    std::cout << "Testing initial state of ScavTrap" << std::endl;
    std::cout << "---------------------------" << std::endl;
    scav.attack("Test Dummy"); // İlk saldırı (başlangıç değerleriyle)
    scav.guardGate();          // Gate keeper moduna geçiş
    std::cout << "---------------------------" << std::endl;

    // Hasar alma, enerji kontrolü, ve onarım testi
    std::cout << "Testing damage, repair, and energy" << std::endl;
    scav.takeDamage(30);       // ScavTrap'in bir miktar hasar almasını test et
    scav.beRepaired(20);       // ScavTrap'in hasarı tamir etmesini test et
    scav.takeDamage(100);      // ScavTrap'in aşırı hasar almasını test et
    scav.attack("Target After Damage"); // Öldükten sonra saldırıyı test et
    scav.beRepaired(50);       // Ölüyken onarım yapmayı test et
    std::cout << "---------------------------" << std::endl;

    // Enerji kontrolü ve tekrar saldırı testi
    std::cout << "Testing repeated attacks and energy depletion" << std::endl;
    ScavTrap scav2("Energy Test");
    for (int i = 0; i < 50; i++)  // 50 saldırı, yani başlangıç enerji değeri 50'yi aşıyor
    {
        scav2.attack("Energy Target");
    }
    scav2.attack("Out of Energy"); // Enerji bitince saldırıyı test et
    std::cout << "---------------------------" << std::endl;

    // Farklı bir ScavTrap nesnesi ile ödevli atama operatörünün çalışmasını test et
    std::cout << "Testing assignment operator" << std::endl;
    ScavTrap scav3("Original");
    ScavTrap scav4("Copy Target");
    scav3 = scav4;  // scav3 nesnesine scav4 değerlerini atama
    scav3.attack("Assigned Copy"); // scav3, scav4 özellikleriyle saldırmalı
    std::cout << "---------------------------" << std::endl;

    // Destructors'lar çalıştırıldığında her şeyin düzgün kapandığını göster
    std::cout << "End of tests - destructors will be called for all ScavTraps" << std::endl;

    return 0;
}