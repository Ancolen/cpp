#include "Form.hpp"

Form::Form() : _name("default"), _signatureStatus(false), _signatureGrade(1), _executionDegree(2)
{
}

Form::Form(std::string name, int signatureGrade, int executinDegree)
    : _name(name), _signatureStatus(false), _signatureGrade(signatureGrade), _executionDegree(executinDegree)
{ 
    if(signatureGrade > 150)
        throw GradeTooLowException ();
    if(signatureGrade < 1)
        throw GradeTooHighException();
}

Form::Form(const Form &copy) 
: _name(copy._name), _signatureGrade(copy._signatureGrade),
  _signatureStatus(copy._signatureStatus), _executionDegree(copy._executionDegree)
{ }

Form &Form::operator=(const Form &other)
{
    if(this != &other)
    {
        this->_signatureStatus = other._signatureStatus;
        this->_executionDegree = other._executionDegree;
        this->_signatureGrade  = other._signatureGrade ;
    }
    return *this;
}

Form::~Form()
{
}

std::string Form::getName()
{
    return this->_name;
}

bool Form::getSignatureStatus()
{
    return this->_signatureStatus;
}

int Form::getSignatureGrade()
{
    return this->_signatureGrade;
}

int Form::getExecutionDegree()
{
    return this->_executionDegree;
}

void Form::beSigned(Bureaucrat &b)
{
    if(b.getGrade() >= this->_signatureGrade)
        throw GradeTooLowException();
    this->_signatureStatus = true;
}

std::ostream &operator<<(std::ostream &out, Form &form)
{
    out << "Name: " << form.getName() << ", Signature Status: " << form.getSignatureStatus()
    << ", Signature Grade: " << form.getSignatureGrade() << ", Execution Degree: " << form.getExecutionDegree();
    return out;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}