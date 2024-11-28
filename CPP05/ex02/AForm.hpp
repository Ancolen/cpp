


#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
    virtual ~AForm();

    std::string getName             () const;

    bool        getSignatureStatus  () const;

    int         getSignatureGrade   () const;
    int         getExecutionDegree  () const;    

    void        beSigned(Bureaucrat &b);

    void        setSignatureStatus(bool x);
    void        setSignatureGrade (int grade);
    void        setExecutionDegree(int degree);
    void        setName(std::string name);

    void execute(const Bureaucrat& executor) const;

    virtual void personalAction() const = 0;



    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
        const char* what() const throw();
    };
    class FormNotSignedException : public std::exception {
        const char* what() const throw();
    };

};

std::ostream& operator<<(std::ostream& out, AForm& AForm);

