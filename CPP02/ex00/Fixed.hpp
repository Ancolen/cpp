








#pragma once

class Fixed
{
private:
    int nbr;
    static const int nbr1 = 8;
public:
    Fixed();
    Fixed(const Fixed& copy);
    
    Fixed &operator=(const Fixed& other);
    
    ~Fixed();

    int  getRawBits() const ;
    void setRawBits(int const raw);
};
