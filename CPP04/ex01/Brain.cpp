



#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100; i++)
        this->ideas[i] = "Idea #" + std::to_string(i);
    std::cout << "Brain ctor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    *this = copy;

    std::cout << "Brain copy ctor called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    if(this != &other)
    {
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    }
    return *this;
}

void Brain::setIdeas(std::string idea, int index)
{
    this->ideas[index] = idea;
}

std::string Brain::getIdea(int index)
{
    return this->ideas[index];
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}
