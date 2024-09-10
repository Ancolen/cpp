



#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed () : nbr(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::Fixed (int value) : nbr(value << nbrDigit)
{ std::cout << "Int constructor called"     << std::endl; }

Fixed::Fixed (float value) : nbr(static_cast<int>(value * (1 << nbrDigit)))
{ std::cout << "Float constructor alled"    << std::endl; }

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

int Fixed::toInt()const
{
    return nbr >> nbrDigit;
}

float Fixed::toFloat() const
{
    return static_cast<float>(nbr) / (1 << nbrDigit);
}

int Fixed::getRawBits( ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->nbr;
}

void Fixed::setRawBits(int const raw)
{
    this->nbr = raw;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}