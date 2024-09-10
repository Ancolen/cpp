
#pragma once
#include <iostream>
#include <string>

class Harl
{
private:
    std::string strs[4]                  ;
    typedef void (Harl::*HarlFunc)(void) ;
    HarlFunc functions[4]                ;
    void info    ()                      ;
    void debug   ()                      ;
    void warning ()                      ;
    void error   ()                      ;
public:
    Harl         ()                      ;
    void complain(std::string level);
};
