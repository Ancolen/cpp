



#include "Animal.hpp"
#include "Dog.hpp"


Dog::Dog()
{
    this->type  = "Dog"  ;
    this->voice = "Woof!";
    std::cout << "Dog ctor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    *this = copy;

    std::cout << "Dog copy ctor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        this->type  = other.type ;
        this->voice = other.voice;
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << this->voice << std::endl;
}
