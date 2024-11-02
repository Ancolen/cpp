
#pragma once

#include "AMateria.hpp"

class IMateriaSource
{
private:
    /* data */
public:
    virtual ~IMateriaSource();
    virtual void learnMateria(AMateria*) = 0;
    virtual AMateria* createMateria(const std::string& type) = 0;
};
