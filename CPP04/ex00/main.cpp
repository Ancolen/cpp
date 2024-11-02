

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    Animal *a = new Animal();

    Animal *j = new Cat   ();
    Animal *k = new Cat   ();

    std::cout << "Type of j: " << j->getType() << std::endl;
    std::cout << "Type of k: " << k->getType() << std::endl;

    j->makeSound();
    k->makeSound();
    a->makeSound();

    delete a;
    delete j;
    delete k;

    Animal *d = new Dog();

    std::cout << "Type of d: " << d->getType() << std::endl;

    d->makeSound();

    delete d;

    std::cout << "---------------------" << std::endl;

    WrongAnimal *w = new WrongAnimal();
    WrongAnimal *x = new WrongCat   ();

    std::cout << "Type of x: " << w->getType() << std::endl;
    std::cout << "Type of y: " << x->getType() << std::endl;

    w->makeSound();
    x->makeSound();

    delete w;
    delete x;

    return 0;
}
