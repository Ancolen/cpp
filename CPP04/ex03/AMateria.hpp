



#pragma once
#include <iostream>
#include "ICharacter.hpp"

class ICharacter;
class AMateria
{
protected:
    std::string type;

public:
    AMateria();
    AMateria(const std::string &type);
    AMateria(const AMateria& other);
    AMateria& operator=(const AMateria& other);

    virtual ~AMateria();
    std::string const &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};
