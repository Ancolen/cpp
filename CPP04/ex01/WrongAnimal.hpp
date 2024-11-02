


#include <iostream>

class WrongAnimal
{
protected:
    std::string type;
    //std::string voice;
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal& copy);

    WrongAnimal& operator=(const WrongAnimal& other);
    
    ~WrongAnimal();

    std::string getType();
    void makeSound();
};
