#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    this->setName("default");
    this->setExecutionDegree(5);
    this->setSignatureGrade(25);
    this->setSignatureStatus(false);
}

PresidentialPardonForm::PresidentialPardonForm(std::string name)
{
    this->_target = name;
    this->setExecutionDegree(5);
    this->setSignatureGrade(25);
    this->setSignatureStatus(false);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    //dtor
}

void PresidentialPardonForm::personalAction()
{
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}