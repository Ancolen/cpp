




#include <iostream>

int main(int argc, char const *argv[])
{
    std::string str        = "HI THIS IS BRAIN";
    std::string* stringPTR = &str;
    std::string& stringREF = str;

    std::cout << "str bellek adresi: " << &str << std::endl;
    std::cout << "stringPTR'nin tuttuğu bellek adresi: " << stringPTR << std::endl;
    std::cout << "stringREF bellek adresi: " << &stringREF << std::endl;

    std::cout << "str değişkeninin değeri: " << str << std::endl;
    std::cout << "stringPTR'nin işaret ettiği değer: " << *stringPTR << std::endl;
    std::cout << "stringREF'in işaret ettiği değer: " << stringREF << std::endl;
    return 0;
}
