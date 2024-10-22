#pragma once 

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string Voice;
    std::string Name;
public:
    void SetNameAndVoice(std::string name, std::string Voice);
    void announce();
    ~Zombie();
};
    Zombie* zombieHorde(int n,std::string name );