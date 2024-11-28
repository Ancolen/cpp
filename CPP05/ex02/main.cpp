#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
    try {
        std::cout << "=== Bureaucrat and Form Creation ===" << std::endl;

        Bureaucrat john("John", 50);
        Bureaucrat alice("Alice", 140);
        Bureaucrat boss("Boss", 1);

        std::cout << john << std::endl;
        std::cout << alice << std::endl;
        std::cout << boss << std::endl;

        std::cout << "\n=== Form Creation ===" << std::endl;

        PresidentialPardonForm pardonForm("Alice");
        RobotomyRequestForm robotomyForm("John");
        ShrubberyCreationForm shrubberyForm("Home");

        std::cout << pardonForm << std::endl;
        std::cout << robotomyForm << std::endl;
        std::cout << shrubberyForm << std::endl;

        std::cout << "\n=== Signing Forms ===" << std::endl;

        alice.signAForm(shrubberyForm); // Successful
        john.signAForm(robotomyForm);  // Successful
        try {
            john.signAForm(pardonForm); // Should throw (grade too low)
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        boss.signAForm(pardonForm);    // Successful

        std::cout << "\n=== Executing Forms ===" << std::endl;

        try {
            alice.executeForm(shrubberyForm); // Should succeed
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            john.executeForm(robotomyForm); // 50% success chance
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        try {
            john.executeForm(pardonForm); // Should fail (grade too low)
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

        boss.executeForm(pardonForm); // Should succeed

        std::cout << "\n=== Additional Tests ===" << std::endl;

        try {
            ShrubberyCreationForm invalidShrubbery("InvalidHome");
            alice.signAForm(invalidShrubbery);
            invalidShrubbery.execute(alice); // Should succeed, writes ASCII tree to a file
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }

    } catch (const std::exception &e) {
        std::cerr << "Unexpected Error: " << e.what() << std::endl;
    }

    return 0;
}
