
#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *brain;
public:
    Dog();
    Dog(const Dog& copy);

    Dog& operator=(const Dog& other);

    ~Dog();

    void setBrainIdeas();
    std::string getBrainIdeas(int index);

    void makeSound();

};
