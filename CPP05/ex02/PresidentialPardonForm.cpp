#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("default Presidential Pardon Form", 25, 5), _target("default")
{ }

PresidentialPardonForm::PresidentialPardonForm(std::string name)
    : AForm("Presidential Pardon Form", 25, 5), _target(name)
{ }

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) 
    : AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionDegree()), _target(copy._target)
{ }

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    if(this != &other)
        AForm::operator=(other);
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //dtor
}

void PresidentialPardonForm::personalAction() const
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
