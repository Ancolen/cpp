

#pragma once

#include "Form.hpp"
#include <iostream>

class Form;

class Bureaucrat
{
private:
    const std::string _name;
    int   _grade           ;

public:
    Bureaucrat           (                           );
    Bureaucrat           (std::string name, int grade);
    Bureaucrat           (const Bureaucrat& copy     );
    Bureaucrat& operator=(const Bureaucrat& copy     );
    ~Bureaucrat          (                           );

    std::string getName   (         );
    int         getGrade  (         );
    void        setGrade  (int grade);
    void        raiseGrade(         );
    void        dropGrade (         );
    void        signForm  (Form &f  );

    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception  {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);