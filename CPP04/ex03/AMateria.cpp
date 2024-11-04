



#include "MateriaSource.hpp"
#include "AMateria.hpp"


AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type) : type(type)
{
}

AMateria::AMateria(const AMateria &other)
{
    *this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
    if (this != &other)
    {
        this->type = other.type;
    }
    return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter &target)
{
    (void)target;
}
