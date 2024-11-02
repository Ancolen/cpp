

#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
    FragTrap();
    FragTrap(std::string name);

    FragTrap(const FragTrap& copy);

    ~FragTrap();

    FragTrap& operator=(const FragTrap& other);

    void highFiveGuys(void);
};