#include "MateriaSource.hpp"





MateriaSource::MateriaSource()
{
    for(int i = 0; i < 100; i++)
        materia[i] = 0;
    count = 0;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
    *this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
    if(this != &other)
    {
        for(int i = 0; i < this->count; i++)
            delete materia[i];
        for(int i = 0; i < other.count; i++)
            materia[i] = other.materia[i]->clone();
        count = other.count;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *a)
{
    if (count < 4)
	{
		this->materia[this->count] = a;
		this->count++;
	}
}

AMateria *MateriaSource::createMateria(const std::string &type)
{
    for(int i = 0; i < count; i++)
    {
        if(materia[i]->getType() == type)
            return materia[i]->clone();
    }
    return 0;
}
