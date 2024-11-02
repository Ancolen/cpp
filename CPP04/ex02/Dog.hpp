
#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& copy);

    Dog& operator=(const Dog& other);

    ~Dog();

    void makeSound();

};
