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

std::string AForm::getName() const
{
    return this->_name;
}

bool AForm::getSignatureStatus() const
{
    return this->_signatureStatus;
}

int AForm::getSignatureGrade() const
{
    return this->_signatureGrade;
}

int AForm::getExecutionDegree() const
{
    return this->_executionDegree;
}

void AForm::beSigned(Bureaucrat &b)
{
    if(b.getGrade() >= this->_signatureGrade)
        throw GradeTooLowException();
    this->_signatureStatus = true;
}

void AForm::setSignatureStatus(bool x)
{
    this->_signatureStatus = x;
}

void AForm::setSignatureGrade(int grade)
{
    this->_signatureGrade = grade;
}

void AForm::setExecutionDegree(int degree)
{
    this->_executionDegree = degree;
}

void AForm::setName(std::string name)
{
    // this->_name = name;
}

void AForm::execute(const Bureaucrat &executor) const
{
    if(!this->getSignatureStatus())
        throw FormNotSignedException();
    if(executor.getGrade() > this->getExecutionDegree())
        throw GradeTooLowException();
    this->personalAction();
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
const char* AForm::FormNotSignedException::what() const throw()
{
    return "Form is not signed";
}