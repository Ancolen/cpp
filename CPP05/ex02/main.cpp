        
#include <iostream>
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "AForm.hpp"

int main() // makro atanabilir 1-150
{
    // try
    // {
    //     Bureaucrat b1("b1", 2);
    //     std::cout << b1 << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "bürokrat oluşturma " << e.what() << std::endl; 
    // }
    

    // try
    // {
    //     PresidentialPardonForm p1("target");
    //     std::cout << p1.getTarget() << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << "form oluşturma " << e.what() << std::endl;
    // }

    try
    {
        Bureaucrat b1("bureaucrat", 2);
        PresidentialPardonForm p1("form");
        b1.signAForm(p1);
        b1.executeForm(p1);

    }
    catch(const std::exception& e)
    {
        std::cerr << "execute" <<  e.what() << std::endl;
    }
    return 0;
    







    // // Bureaucrat oluşturma ve başlangıç durumunu yazdırma
    // try
    // {
    //     Bureaucrat alice("Alice", 10);
    //     std::cout << alice << std::endl;

    //     Bureaucrat bob("Bob", 140);
    //     std::cout << bob << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while creating Bureaucrat: " << e.what() << std::endl;
    // }

    // // AForm oluşturma ve başlangıç durumunu yazdırma
    // try
    // {
    //     AForm taxAForm("Tax AForm", 50, 30);
    //     std::cout << taxAForm << std::endl;

    //     AForm visaAForm("Visa AForm", 145, 142);
    //     std::cout << visaAForm << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while creating AForm: " << e.what() << std::endl;
    // }

    // // AFormları imzalama işlemlerini test etme
    // try
    // {
    //     Bureaucrat alice("Alice", 10);
    //     AForm taxAForm("Tax AForm", 50, 30);

    //     alice.signAForm(taxAForm); // Alice başarılı bir şekilde imzalar
    //     std::cout << taxAForm << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while signing AForm: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat bob("Bob", 140);
    //     AForm taxAForm("Tax AForm", 50, 30);

    //     bob.signAForm(taxAForm); // Bob başarısız olur
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while signing AForm: " << e.what() << std::endl;
    // }

    // // Bureaucrat grade artırma/azaltma testleri
    // try
    // {
    //     Bureaucrat alice("Alice", 10);

    //     alice.dropGrade(); // Grade düşürülür: 10 -> 11
    //     std::cout << alice << std::endl;

    //     alice.raiseGrade(); // Grade artırılır: 11 -> 10
    //     std::cout << alice << std::endl;
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while adjusting grade: " << e.what() << std::endl;
    // }

    // try
    // {
    //     Bureaucrat bob("Bob", 140);

    //     bob.raiseGrade(); 
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while adjusting grade: " << e.what() << std::endl;
    // }

    // // Geçersiz AForm oluşturma testleri
    // try
    // {
    //     AForm invalidAForm("Invalid AForm", 200, 150); // Grade çok düşük
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while creating invalid AForm: " << e.what() << std::endl;
    // }

    // try
    // {
    //     AForm invalidAForm("Invalid AForm", 0, 50); // Grade çok yüksek
    // }
    // catch (const std::exception &e)
    // {
    //     std::cerr << "Exception while creating invalid AForm: " << e.what() << std::endl;
    // }

    // std::cout << "All tests completed successfully." << std::endl;

    // return 0;
}
