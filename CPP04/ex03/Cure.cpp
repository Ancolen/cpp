#include "Cure.hpp"


Cure::Cure()
{
    this->type = "cure";
}

AMateria *Cure::clone() const
{
    return new Cure();
}

Cure::Cure(const Cure &other)
{
    *this = other;
}

Cure &Cure::operator=(const Cure &other)
{
    if (this != &other)
        this->type = other.type;
    return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
