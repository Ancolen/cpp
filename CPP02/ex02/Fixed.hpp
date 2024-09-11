#pragma once
#include <iostream>

class Fixed
{
private:
    int nbr;
    static const int nbrDigit = 8;

public:
    Fixed();
    Fixed(int value);
    Fixed(float value);
    Fixed(const Fixed& copy);
    ~Fixed();

    Fixed& operator=(const Fixed& other);
    Fixed operator+(const Fixed& other);
    Fixed operator-(const Fixed& other);
    Fixed operator*(const Fixed& other);
    Fixed operator/(const Fixed& other);
    Fixed& operator++();
    Fixed operator++(int); 
    Fixed& operator--();    
    Fixed operator--(int);

    bool operator<(const Fixed& other);
    bool operator<=(const Fixed& other);
    bool operator>(const Fixed& other);
    bool operator>=(const Fixed& other);
    bool operator==(const Fixed& other);
    bool operator!=(const Fixed& other);

    int toInt() const;
    float toFloat() const;
    int getRawBits() const;
    void setRawBits(int const raw);

    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

int roundToInt(float value);
