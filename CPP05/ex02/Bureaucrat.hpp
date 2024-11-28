

#pragma once

#include "AForm.hpp"
#include <iostream>

class AForm;

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
    int         getGrade  (         ) const;
    void        setGrade  (int grade);
    void        raiseGrade(         );
    void        dropGrade (         );
    void        signAForm  (AForm &f  );
    void        executeForm(AForm const &form);

    class GradeTooHighException : public std::exception {
        const char* what() const throw();
    };

    class GradeTooLowException : public std::exception  {
        const char* what() const throw();
    };
};

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);