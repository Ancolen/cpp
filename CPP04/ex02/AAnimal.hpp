

#pragma once
#include <iostream>

class AAnimal
{
protected:
    std::string type ;
    std::string voice;

public:
    AAnimal();
    AAnimal(const AAnimal& copy);

    AAnimal& operator=(const AAnimal& other);

    virtual ~AAnimal();

    virtual void makeSound() = 0;

    std::string getType();
};