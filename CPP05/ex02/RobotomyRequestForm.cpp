#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("default Robotomy Request Form", 72, 45)
{ }

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("Robotomy Request Form", 72, 45), _target(target)
{ }

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionDegree()), _target(copy._target)
{ }

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    if(this != &other)
        AForm::operator=(other);
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{ /*dtor*/ }

void RobotomyRequestForm::personalAction() const
{
                 std::cout                  << "Makes some drilling noises..."       << std::endl;
    rand() % 2 ? std::cout << this->_target << " has been robotomized successfully." << std::endl
               : std::cout << this->_target << " robotomization failed."             << std::endl;
}
