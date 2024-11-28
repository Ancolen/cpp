



#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
const std::string            _target                                                          ;

public:
    
                             ShrubberyCreationForm (                                  )       ;
                             ShrubberyCreationForm (      std::string           target)       ;
                             ShrubberyCreationForm (const ShrubberyCreationForm &copy )       ;
      ShrubberyCreationForm& operator=             (const ShrubberyCreationForm &other)       ;
                             ~ShrubberyCreationForm(                                  )       ;                

      void                   personalAction        (                                  ) const ;
};
