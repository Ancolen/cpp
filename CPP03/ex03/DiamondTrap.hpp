

#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
    std::string Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);

    DiamondTrap(const DiamondTrap& copy);

    DiamondTrap& operator=(const DiamondTrap& other);

    ~DiamondTrap();

    void whoAmI();
    void attack(const std::string& target);
    
};
