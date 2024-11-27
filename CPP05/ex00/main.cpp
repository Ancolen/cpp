#include "Bureaucrat.hpp"

int main()
{
    // Test valid Bureaucrat creation
    try {
        Bureaucrat b1("Alice", 75);
        std::cout << b1 << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Error creating Bureaucrat: " << e.what() << std::endl;
    }

    // Test grade too high exception in constructor
    try {
        Bureaucrat b2("Bob", 0);  // Invalid: grade is too high
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // Test grade too low exception in constructor
    try {
        Bureaucrat b3("Charlie", 151);  // Invalid: grade is too low
    } catch (const std::exception& e) {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }

    // Test raising grade within range
    try {
        Bureaucrat b4("Diana", 2);
        std::cout << "Before raise: " << b4 << std::endl;
        b4.raiseGrade();
        std::cout << "After raise: " << b4 << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught during raise: " << e.what() << std::endl;
    }

    // Test raising grade that would go out of range
    try {
        Bureaucrat b5("Edward", 1);  // Already at the highest grade
        std::cout << "Before raise: " << b5 << std::endl;
        b5.raiseGrade();  // Should throw GradeTooHighException
    } catch (const std::exception& e) {
        std::cout << "Exception caught during raise: " << e.what() << std::endl;
    }

    // Test dropping grade within range
    try {
        Bureaucrat b6("Fiona", 150);
        std::cout << "Before drop: " << b6 << std::endl;
        b6.dropGrade();
        std::cout << "After drop: " << b6 << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Exception caught during drop: " << e.what() << std::endl;
    }

    // Test dropping grade that would go out of range
    try {
        Bureaucrat b7("George", 151);  // Already at the lowest grade
        std::cout << "Before drop: " << b7 << std::endl;
        b7.dropGrade();  // Should throw GradeTooLowException
    } catch (const std::exception& e) {
        std::cout << "Exception caught during drop: " << e.what() << std::endl;
    }

    return 0;
}
