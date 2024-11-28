


#pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
const std::string             _target                                                           ;

public:
                              PresidentialPardonForm (                                   )      ;
                              PresidentialPardonForm (      std::string            name  )      ;
                              PresidentialPardonForm (const PresidentialPardonForm &copy )      ;
      PresidentialPardonForm& operator=              (const PresidentialPardonForm &other)      ;
                              ~PresidentialPardonForm(                                   )      ;

      void                    personalAction         (                                   ) const;
};
