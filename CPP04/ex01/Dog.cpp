



#include "Animal.hpp"
#include "Dog.hpp"

Dog::Dog()
{
    this->type  = "Dog"  ;
    this->voice = "Woof!";
    this->brain = new Brain();
    std::cout << "Dog ctor called" << std::endl;
}

Dog::Dog(const Dog &copy)
{
    this->brain = new Brain(*copy.brain);
    
    this->type  = copy.type ;
    this->voice = copy.voice;

    std::cout << "Dog copy ctor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        delete this->brain;
        this->brain = new Brain(*other.brain);

        this->type  = other.type ;
        this->voice = other.voice;
    }
    return *this;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

void Dog::setBrainIdeas()
{
    for(int i = 0; i < 100; i++)
        this->brain->setIdeas("Idea #" + std::to_string(i), i); 
}

std::string Dog::getBrainIdeas(int index)
{
    return this->brain->getIdea(index);
}

void Dog::makeSound()
{
    std::cout << this->voice << std::endl;
}
