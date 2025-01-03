

#pragma once

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap& copy);
    
    ScavTrap &operator=(const ScavTrap& other);

    ~ScavTrap();

    void attack(const std::string& target);
    void guardGate();
};
