



#include <iostream>
#include "Fixed.hpp"


Fixed::Fixed () : nbr(0) { std::cout << "Default constructor called" << std::endl; }
Fixed::~Fixed()          { std::cout << "destructor called"          << std::endl; }

Fixed::Fixed(const Fixed& copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;

    if(this != &other)
        this->nbr = other.getRawBits();
    return *this;
}

int Fixed::getRawBits( ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->nbr;
}

//set func