#pragma once 

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string Name;
    std::string Voice;
public:
    void SetNameAndVoice(std::string name, std::string Voice);
    void announce();
    ~Zombie();
};
    Zombie* zombieHorde(int n,std::string name );