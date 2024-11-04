
#pragma once
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string name;
    AMateria *materia[4];

public:
    Character();
    Character(const Character &other);
    Character(std::string name);

    Character &operator=(const Character &other);

    ~Character();
    
    std::string const &getName() const         ;
    void equip(AMateria* m)                    ;
    void unequip(int idx)                      ;
    void use(int idx, ICharacter& target)      ;
};
