
#pragma once 

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string Name;
    std::string Voice;
public:
    void announce(void);
    Zombie(std::string name);
    ~Zombie();
};

    Zombie* newZombie(std::string Name);
    void randomChump(std::string name);
