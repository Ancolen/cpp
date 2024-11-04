
#pragma once
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
    int     count;
    AMateria *materia[100];
public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    ~MateriaSource();
    MateriaSource& operator=(const MateriaSource& other);
    void learnMateria(AMateria *a);
    AMateria* createMateria(const std::string& type);
};
