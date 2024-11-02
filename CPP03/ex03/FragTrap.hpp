

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
    int DefaultHitPoint    ;
    int DefaultAttackPoint ;
    
public:
    FragTrap();
    FragTrap(std::string name);

    FragTrap(const FragTrap& copy);

    ~FragTrap();

    FragTrap& operator=(const FragTrap& other);

    void highFiveGuys(void);
};
