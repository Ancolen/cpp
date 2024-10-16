
#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using std::string;

class manipulation
{
private:
    
    string fileName;
    string s1;
    string s2;
    string content;

    std::ifstream __f;

    void openFile();
    void fileContent();
    void findAndReplace();
    void createNewFile();

public:

    manipulation(string fileName, string s1, string s2);

    void replaceFile();
};
