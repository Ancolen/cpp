


#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string name);
    ~PresidentialPardonForm();

    void personalAction();
};
