#include "Cat.hpp"

Cat::Cat()
{
    this->type  = "Cat"  ;
    this->voice = "Meow!";
    this->brain  = new Brain();
    std::cout << "Cat ctor called" << std::endl;
}

Cat::Cat(const Cat &copy)
{
    this->brain = new Brain(*copy.brain);

    this->type  = copy.type ;
    this->voice = copy.voice;

    std::cout << "Cat copy ctor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
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

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound()
{
    std::cout << this->voice << std::endl;
}

void Cat::setBrainIdeas()
{
    for(int i = 0; i < 100; i++)
        this->brain->setIdeas("Idea #" + std::to_string(i), i); 
}

std::string Cat::getBrainIdeas(int index)
{
    return this->brain->getIdea(index);
}
