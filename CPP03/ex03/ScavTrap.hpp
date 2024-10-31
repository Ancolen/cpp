
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
protected:
    int DefaultEnergyPoint = 50;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    
    ScavTrap &operator=(const ScavTrap& other);

    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};
