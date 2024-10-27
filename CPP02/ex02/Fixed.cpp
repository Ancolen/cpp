#include "Fixed.hpp"

int roundToInt(float value) {
    return (value > 0) ? (int)(value + 0.5f) : (int)(value - 0.5f);
}

Fixed::Fixed() : nbr(0) { 
    /*std::cout << "Default constructor called" << std::endl;*/ 
}

Fixed::Fixed(int value) : nbr(value << nbrDigit) {
    /* std::cout << "Int constructor called" << std::endl;*/ 
}

Fixed::Fixed(float value) : nbr(roundToInt(value * (1 << nbrDigit))) {
    /*std::cout << "Float constructor called" << std::endl;*/ 
}

Fixed::~Fixed() {
    /*std::cout << "Destructor called" << std::endl;*/ 
}

Fixed::Fixed(const Fixed& copy) {
    *this = copy; 
}

Fixed& Fixed::operator=(const Fixed& other) {
    if (this != &other)
        this->nbr = other.getRawBits();
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
    os << fixed.toFloat();
    return os;
}

bool Fixed::operator<(const Fixed& other) {
    return this->getRawBits() < other.getRawBits(); 
}

bool Fixed::operator<=(const Fixed& other) {
    return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator>(const Fixed& other) {
    return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) {
    return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) {
    return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) {
    return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed& other) {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) {
    return Fixed(this->toFloat() / other.toFloat());
}

Fixed& Fixed::operator++() {
    this->setRawBits(this->getRawBits() + 10);
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() + 1);
    return tmp;
}

Fixed& Fixed::operator--() {
    this->setRawBits(this->getRawBits() - 1);
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->setRawBits(this->getRawBits() - 1);
    return tmp;
}

int Fixed::toInt() const {
    return nbr >> nbrDigit;
}

float Fixed::toFloat() const {
    return static_cast<float>(nbr) / (1 << nbrDigit);
}

int Fixed::getRawBits() const {
    return this->nbr;
}

void Fixed::setRawBits(int const raw) {
    this->nbr = raw;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() <  b.getRawBits()) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a.getRawBits() <  b.getRawBits()) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a.getRawBits() >= b.getRawBits()) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a.getRawBits() >= b.getRawBits()) ? a : b;
}
