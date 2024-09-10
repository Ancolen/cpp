








#pragma once

class Fixed
{
private:
    int nbr;
    static const int nbrDigit = 8;
public:
    Fixed ()                            ;
    Fixed (int nbr)                     ;
    Fixed (float nbr )                  ;
    Fixed(const Fixed& copy)            ;
    ~Fixed()                            ;
    Fixed &operator=(const Fixed& other);
    Fixed &operator<<(Fixed& other     );
    int   getRawBits() const            ;
    void  setRawBits(int const raw     );
    int   toInt     () const            ;
    float toFloat   () const            ;
};
std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

