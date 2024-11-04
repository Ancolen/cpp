#include "Character.hpp"

Character::Character()
{
    this->name = "Default";
    for(int i = 0; i < 4; i++)
        materia[i] = 0;
}
Character::~Character()
{
}

Character::Character(const Character &other)
{
    *this = other;
}

Character &Character::operator=(const Character &other)
{
    if(this != &other)
    {
        this->name = other.name;
        for(int i = 0; i < 4; i++)
        {
            if(materia[i])
                delete materia[i];
            this->materia[i] = other.materia[i]->clone();
        }
    }
    return *this;
}

const std::string &Character::getName() const
{
    return name;
}

Character::Character(std::string name) : name(name)
{
    for(int i = 0; i < 4; i++)
        materia[i] = 0;
}

void Character::equip(AMateria *m)
{
    if(!m) return;
    for(int i = 0; i < 4; i++)
    {
        if(!materia[i])
        {
            materia[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if(idx >= 0 && idx < 4)
        materia[idx] = 0;
}

void Character::use(int idx, ICharacter &target)
{
    if(idx >= 0 && idx < 4 && materia[idx])
        materia[idx]->use(target);
}
