#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("default Shrubbery Creation Form", 145, 137)
{ }

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("Shrubbery Creation Form", 145, 137), _target(target)
{ }

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy.getName(), copy.getSignatureGrade(), copy.getExecutionDegree()), _target(copy._target)
{ }

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    if(this != &other)
        AForm::operator=(other);
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{ /*dtor*/ }

void ShrubberyCreationForm::personalAction() const
{
    std::ofstream outfile(this->_target + "_shrubbery");
    if (!outfile.is_open())
        throw std::ios_base::failure("File could not be opened.");
    
    outfile << "      /\\      " << std::endl;
    outfile << "     /\\*\\     " << std::endl;
    outfile << "    /\\O\\*\\    " << std::endl;
    outfile << "   /*/\\/\\/\\   " << std::endl;
    outfile << "  /\\O\\/\\*\\/\\  " << std::endl;
    outfile << " /\\*\\/\\*\\/\\/\\ " << std::endl;
    outfile << "/\\O\\/\\/*/\\/O/\\" << std::endl;
    outfile << "      ||      " << std::endl;
    outfile << "      ||      " << std::endl;
    outfile << "      ||      " << std::endl;
    outfile.close();
    std::cout << "File " << this->_target << "_shrubbery created." << std::endl;
}
