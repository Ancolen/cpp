


#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    
    bool  _signatureStatus ;
    
    int   _signatureGrade  ;
    int   _executionDegree ;


public:
    Form();
    Form(std::string name, int signatureGrade, int executinDegree);
    Form(const Form &copy);
    Form& operator=(const Form &other);
    ~Form();

    std::string getName             ();

    bool        getSignatureStatus  ();

    int         getSignatureGrade   ();
    int         getExecutionDegree  ();    

    void    beSigned(Bureaucrat &b);

    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, Form& form);

