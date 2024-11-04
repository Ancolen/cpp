

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    this->type = "WrongAnimal";
    this->voice = "WrongAnimal sound";
    std::cout << "WrongAnimal ctor called" << std::endl;   
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    *this = copy;

    std::cout << "WrongAnimal copy ctor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {
        this->type = other.type;
        this->voice = other.voice;
    }
    return *this;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType()
{
    return "Wrong Animal type";
}

void WrongAnimal::makeSound()
{
    std::cout << "Wrong Animal voice" << std::endl;
}