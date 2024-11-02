

#include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
private:
    /* data */
public:
    MateriaSource();
    void learnMateria(AMateria*);
    AMateria* createMateria(const std::string& type);
    ~MateriaSource();
};
