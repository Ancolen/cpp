#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy) : _name(copy._name), _grade(copy._grade)
{
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
    if (this != &copy)
        _grade = copy._grade;
    return *this;
}

std::string Bureaucrat::getName()
{
    return _name;
}

int Bureaucrat::getGrade()
{
    return _grade;
}

void Bureaucrat::raiseGrade()
{
    if(_grade - 1 <= 0)
        throw GradeTooHighException();
    setGrade(_grade - 1);
}

void Bureaucrat::dropGrade()
{
    if(_grade + 1 >= 151)
        throw GradeTooLowException();
    setGrade(_grade + 1);
}

void Bureaucrat::setGrade(int grade)
{
    _grade = grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low";
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat)
{
    out << "Name: " << bureaucrat.getName() << ", Bureaucrat Grade: " << bureaucrat.getGrade();
    return out;
}

void Bureaucrat::signAForm(AForm &f)
{
    f.beSigned(*this);
    if(f.getSignatureStatus())
        std::cout << this->_name << " signed " << f.getName() << std::endl;
    else
        std::cout << this->_name << " couldn't sign " << f.getName() << " because " << std::endl;
}
