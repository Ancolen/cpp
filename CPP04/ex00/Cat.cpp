#include "Cat.hpp"

Cat::Cat()
{
    this->type  = "Cat"  ;
    this->voice = "Meow!";
    std::cout << "Cat ctor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    *this = copy;

    std::cout << "Cat copy ctor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        this->type  = other.type ;
        this->voice = other.voice;
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
    std::cout << this->voice << std::endl;
}
