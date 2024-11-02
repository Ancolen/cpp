

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    //AAnimal *a = new AAnimal();
    AAnimal *a = new Cat();
    AAnimal *b = new Dog();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;
}
