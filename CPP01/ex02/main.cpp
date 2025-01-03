#include <iostream>

int main()
{
    std::string  str        = "HI THIS IS BRAIN";
    std::string* stringPTR  = &str              ;
    std::string& stringREF  = str               ;

    std::cout << "str memory address: "                   << &str       << std::endl;
    std::cout << "The memory address held by stringPTR: " << stringPTR  << std::endl;
    std::cout << "stringREF memory address: "             << &stringREF << std::endl;

    std::cout << "The value of the variable str: "        << str        << std::endl;
    std::cout << "The value pointed to by stringPTR: "    << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: "    << stringREF  << std::endl;
    return 0;
}
