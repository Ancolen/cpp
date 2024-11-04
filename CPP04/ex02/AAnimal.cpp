#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    this->type  = "Animal"      ;
    this->voice = "Animal sound";
    std::cout << "Animal ctor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy)
{
    *this = copy;

    std::cout << "AAnimal copy ctor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &other)
{
    if(this != &other)
    {
        this->type  = other.type ;
        this->voice = other.voice;
    }
    return *this;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

void AAnimal::makeSound()
{
    std::cout << this->voice << std::endl;
}

std::string AAnimal::getType()
{
    return this->type;
}
