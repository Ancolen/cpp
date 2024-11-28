


#pragma once
#include "AForm.hpp"


class RobotomyRequestForm : public AForm
{
private:
const std::string          _target                                                     ;

public:
                           RobotomyRequestForm (                                )      ;
                           RobotomyRequestForm (      std::string         target)      ;
                           RobotomyRequestForm (const RobotomyRequestForm &copy )      ;
      RobotomyRequestForm& operator=           (const RobotomyRequestForm &other)      ;
                           ~RobotomyRequestForm(                                )      ;

      void                 personalAction      (                                ) const;
};
