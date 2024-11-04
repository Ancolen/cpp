#include "Animal.hpp"

Animal::Animal()
{
    this->type  = "Animal"      ;
    this->voice = "Animal sound";
    
    std::cout << "Animal ctor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    *this = copy;

    std::cout << "Animal copy ctor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if(this != &other)
    {
        this->type  = other.type ;
        this->voice = other.voice;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

void Animal::makeSound()
{
    std::cout<< this->voice << std::endl;
}

std::string Animal::getType()
{
    return this->type;
}
