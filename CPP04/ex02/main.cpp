

#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const int animalCount = 6; // Örnek olarak 6 tane hayvan oluşturalım.
    AAnimal* animals[animalCount];

    // Hayvanları oluştur.
    for (int i = 0; i < animalCount; i++) {
        if (i < animalCount / 2) {
            animals[i] = new Dog();
        } else {
            animals[i] = new Cat();
        }
    }

    // Hayvanları kullan ve fikirleri ayarlayın.
    for (int i = 0; i < animalCount; i++) {
        std::cout << animals[i]->getType() << " makes sound: ";
        animals[i]->makeSound();
        
        // Her hayvana fikirlerini ayarlayın.
        if (Dog* dog = dynamic_cast<Dog*>(animals[i])) {
            dog->setBrainIdeas(); // Fikirleri ayarlayın
            std::cout << "Dog ideas: " << dog->getBrainIdeas(0) << ", " << dog->getBrainIdeas(1) << std::endl; // İlk iki fikri göster
        } else if (Cat* cat = dynamic_cast<Cat*>(animals[i])) {
            cat->setBrainIdeas(); // Fikirleri ayarlayın
            std::cout << "Cat ideas: " << cat->getBrainIdeas(0) << ", " << cat->getBrainIdeas(1) << std::endl; // İlk iki fikri göster
        }
    }

    // Hayvanları sil.
    for (int i = 0; i < animalCount; i++) {
        delete animals[i];
    }

    return 0;
}
