


#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AAForm
{
private:
    const std::string _name;
    
    bool  _signatureStatus ;
    
    int   _signatureGrade  ;
    int   _executionDegree ;


public:
    AForm();
    AForm(std::string name, int signatureGrade, int executinDegree);
    AForm(const AForm &copy);
    AForm& operator=(const AForm &other);
    ~AForm();

    std::string getName             ();

    bool        getSignatureStatus  ();

    int         getSignatureGrade   ();
    int         getExecutionDegree  ();    

    void        beSigned(Bureaucrat &b);

    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, AForm& AForm);

