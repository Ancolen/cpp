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
    strs     [0] = "DEBUG"        ;
    strs     [1] = "INFO"         ;
    strs     [2] = "WARNING"      ;
    strs     [3] = "ERROR"        ;
    functions[0] = &Harl::info    ;
    functions[1] = &Harl::debug   ;
    functions[2] = &Harl::warning ;
    functions[3] = &Harl::error   ;
}

void Harl::complain(std::string level)
{

    std::cout << level << std::endl;

    if(level.empty())
    {
           std::cerr << "empty argument" << std::endl;
           return;
    }

    int i = 0;

    while ( i < 4 && level.compare(this->strs[i]))
        i++;

    std::cout << i << std::endl;

    switch(i)
    {
    case 0 :
        info   ();
        break    ;
    case 1 :
        debug  ();
        break    ;
    case 2 :
        warning();
        break    ;
    case 3 :
        error  ();
        break    ;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        break;
    }
}