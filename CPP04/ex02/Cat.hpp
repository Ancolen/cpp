
#pragma once
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
private:
    Brain *brain;
public:
    Cat();
    Cat(const Cat& copy);

    Cat& operator=(const Cat& other);

    ~Cat();

    void setBrainIdeas();
    std::string getBrainIdeas(int index);
    
    void makeSound();
};
