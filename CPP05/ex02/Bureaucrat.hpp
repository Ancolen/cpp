

#pragma once

#include "AForm.hpp"
#include <iostream>

class AForm;

class Bureaucrat
{
private:
const   std::string     _name                                                         ;
        int             _grade                                                        ;       

public:
                        Bureaucrat           (                                 )      ;
                        Bureaucrat           (      std::string name, int grade)      ;
                        Bureaucrat           (const Bureaucrat& copy           )      ;
        Bureaucrat&     operator=            (const Bureaucrat& copy           )      ;
                        ~Bureaucrat          (                                 )      ;
    
        void            executeForm          (const AForm&       form          )      ;
        void            signAForm            (      AForm&       form          )      ;
        void            setGrade             (      int          grade         )      ;
        void            raiseGrade           (                                 )      ;
        void            dropGrade            (                                 )      ;
        int             getGrade             (                                 ) const;
        std::string     getName              (                                 ) const;

        class           GradeTooHighException : public std::exception {
            const char* what() const throw();
        };

        class           GradeTooLowException  : public std::exception {
            const char* what() const throw();
        };
};

        std::ostream&   operator<<           (std::ostream& out, Bureaucrat& bureaucrat);