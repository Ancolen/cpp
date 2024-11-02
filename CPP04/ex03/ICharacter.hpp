
#pragma once

#include "AMateria.hpp"
class ICharacter
{
private:
    /* data */
public:
    ICharacter(/* args */);
    ~ICharacter();

    virtual ~ICharacter(); 
    virtual const std::string &getName() const = 0;
    virtual void equip(AMateria* m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter& target) = 0;
};