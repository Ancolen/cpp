



#pragma once
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
    /* data */
public:
    Cure();
    Cure(const Cure &other);

    Cure &operator=(const Cure &other);
    AMateria* clone() const;
    void use(ICharacter& target);

    ~Cure();
};
