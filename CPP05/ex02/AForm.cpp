#include "AForm.hpp"

AForm::AForm() : _name("default"), _signatureStatus(false), _signatureGrade(1), _executionDegree(2)
{
}

AForm::AForm(std::string name, int signatureGrade, int executinDegree)
    : _name(name), _signatureStatus(false), _signatureGrade(signatureGrade), _executionDegree(executinDegree)
{ 
    if(signatureGrade > 150)
        throw GradeTooLowException ();
    if(signatureGrade < 1)
        throw GradeTooHighException();
}

AForm::AForm(const AForm &copy) 
: _name(copy._name), _signatureGrade(copy._signatureGrade),
  _signatureStatus(copy._signatureStatus), _executionDegree(copy._executionDegree)
{ }

AForm &AForm::operator=(const AForm &other)
{
    if(this != &other)
    {
        this->_signatureStatus = other._signatureStatus;
        this->_executionDegree = other._executionDegree;
        this->_signatureGrade  = other._signatureGrade ;
    }
    return *this;
}

AForm::~AForm()
{
}

std::string AForm::getName()
{
    return this->_name;
}

bool AForm::getSignatureStatus()
{
    return this->_signatureStatus;
}

int AForm::getSignatureGrade()
{
    return this->_signatureGrade;
}

int AForm::getExecutionDegree()
{
    return this->_executionDegree;
}

void AForm::beSigned(Bureaucrat &b)
{
    if(b.getGrade() >= this->_signatureGrade)
        throw GradeTooLowException();
    this->_signatureStatus = true;
}

std::ostream &operator<<(std::ostream &out, AForm &AForm)
{
    out << "Name: " << AForm.getName() << ", Signature Status: " << AForm.getSignatureStatus()
    << ", Signature Grade: " << AForm.getSignatureGrade() << ", Execution Degree: " << AForm.getExecutionDegree();
    return out;
}

const char* AForm::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* AForm::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}