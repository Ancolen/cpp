


#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    this->voice = "WrongCat sound";
    this->type = "WrongCat";
    std::cout << "WrongCat ctor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy)
{
    *this = copy;

    std::cout << "WrongCat copy ctor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        this->type = other.type;
        this->voice = other.voice;
    }
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound()
{
    std::cout << this->voice << std::endl;
}
