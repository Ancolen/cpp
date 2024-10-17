
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using std::string;

class manipulation
{
private:
    
    std::ifstream  __f     ;
    
    string         fileName;
    string         s1      ;
    string         s2      ;
    string         content ;

    void openFile      ()  ;
    void fileContent   ()  ;
    void findAndReplace()  ;
    void createNewFile ()  ;

public:

    manipulation(string fileName, string s1, string s2);

    void replaceFile();
};
