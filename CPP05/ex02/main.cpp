        
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() // makro atanabilir 1-150
{
    // Bureaucrat oluşturma ve başlangıç durumunu yazdırma
    try
    {
        Bureaucrat alice("Alice", 10);
        std::cout << alice << std::endl;

        Bureaucrat bob("Bob", 140);
        std::cout << bob << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while creating Bureaucrat: " << e.what() << std::endl;
    }

    // Form oluşturma ve başlangıç durumunu yazdırma
    try
    {
        Form taxForm("Tax Form", 50, 30);
        std::cout << taxForm << std::endl;

        Form visaForm("Visa Form", 145, 142);
        std::cout << visaForm << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while creating Form: " << e.what() << std::endl;
    }

    // Formları imzalama işlemlerini test etme
    try
    {
        Bureaucrat alice("Alice", 10);
        Form taxForm("Tax Form", 50, 30);

        alice.signForm(taxForm); // Alice başarılı bir şekilde imzalar
        std::cout << taxForm << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while signing form: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bob("Bob", 140);
        Form taxForm("Tax Form", 50, 30);

        bob.signForm(taxForm); // Bob başarısız olur
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while signing form: " << e.what() << std::endl;
    }

    // Bureaucrat grade artırma/azaltma testleri
    try
    {
        Bureaucrat alice("Alice", 10);

        alice.dropGrade(); // Grade düşürülür: 10 -> 11
        std::cout << alice << std::endl;

        alice.raiseGrade(); // Grade artırılır: 11 -> 10
        std::cout << alice << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while adjusting grade: " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat bob("Bob", 140);

        bob.raiseGrade(); 
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while adjusting grade: " << e.what() << std::endl;
    }

    // Geçersiz Form oluşturma testleri
    try
    {
        Form invalidForm("Invalid Form", 200, 150); // Grade çok düşük
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while creating invalid form: " << e.what() << std::endl;
    }

    try
    {
        Form invalidForm("Invalid Form", 0, 50); // Grade çok yüksek
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception while creating invalid form: " << e.what() << std::endl;
    }

    std::cout << "All tests completed successfully." << std::endl;

    return 0;
}
