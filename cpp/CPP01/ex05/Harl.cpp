#include <iostream>
#include <cctype>
#include <algorithm>
#include "Harl.hpp"

void Harl::info()
{
    std::cout << "Ekstra domuz pastirmasi eklemenin daha fazla paraya mal olduğuna inanamiyorum.\
     Burgerime yeterince pastirma koymadiniz! Yapsaydiniz, daha fazlasini istemezdim!" << std::endl;
}

void Harl::debug()
{
    std::cout << "7XL-çift peynirli-üçlü turşu-özel-ketçapli burgerime \
    fazladan domuz pastirmasi yemeyi seviyorum. Gerçekten seviyorum!" << std::endl;
}

void Harl::warning()
{
    std::cout << "Bence bedavaya fazladan pastirma yemeyi hak ediyorum. Ben yillardir \
geliyorum, sen geçen aydan beri burada çalişmaya başladin." << std::endl;
}

void Harl::error()
{
    std::cout << "Bu kabul edilemez! Şimdi müdürle konuşmak istiyorum." << std::endl;
}

Harl::Harl()
{
    strs[0] = "INFO";
    strs[1] = "DEBUG";
    strs[2] = "WARNING";
    strs[3] = "ERROR";
    functions[0] = &Harl::info;
    functions[1] = &Harl::debug;
    functions[2] = &Harl::warning;
    functions[3] = &Harl::error;
}

void toUpperCase(std::string& str) {
    std::transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {
        return std::toupper(c);
    });
}

void Harl::complain(std::string level)
{
    toUpperCase(level);

    if(level.empty())
    {
        std::cerr << "boş argüman" << std::endl;
        return;
    }
    int i = -1;
    while ( i < 4 && level.compare(strs[i++]));

    std::cout << i << std::endl;

    if(i >= 4 || i < 0)
        std::cerr << "argümana uygun işlev yok " << std::endl;
    else
        (this->*functions[i])();
}