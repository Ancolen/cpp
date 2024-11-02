




#include "ICharacter.hpp"
#include <iostream>
class AMateria
{
private:
    /* data */
public:
    AMateria();
    AMateria(const std::string &type);

    const std::string &getType() const;
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
    ~AMateria();
};
