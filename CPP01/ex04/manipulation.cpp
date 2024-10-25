#include "manipulation.hpp"
#include <cstdlib>
manipulation::manipulation(string fileName, string s1, string s2) : fileName(fileName), s1(s1), s2(s2)
{
    //__f.open(fileName.c_str());
    //if(!__f.is_open())
    //{
    //    std::cerr << "file cant open" << std::endl;
    //    std::exit(0);
    //}
}

void manipulation::replaceFile()
{
    openFile();
    fileContent();
    findAndReplace();
    createNewFile();
}

void manipulation::openFile()
{
    __f.open(fileName.c_str());
    if(!__f.is_open())
    {
        std::cout << "file cant open" << std::endl;
        exit(0);
    }
}

void manipulation::fileContent()
{
    std::stringstream buffer;
    buffer << __f.rdbuf();
    string str = buffer.str();
    if(str.empty())
    {
        std::cout << "empty file" << std::endl;
        exit(0);
    }
    this->content = str;
}

void manipulation::findAndReplace()
{
    // size_t firstIndex = content.find(this->s1);
    // if(firstIndex == string::npos)
    // {
    //     std::cout << "Searched string not found" << std::endl;
    //     exit(0);
    // }
    // this->content.erase(firstIndex, this->s1.length());
    // this->content.insert(firstIndex, this->s2);
    size_t pos = 0;
    string newContent;
    
    while ((pos = content.find(this->s1)) != string::npos) 
    {
        newContent += content.substr(0, pos) + s2;
        content = content.substr(pos + s1.length());
    }
    
    newContent += content;
    
    content = newContent;
}

void manipulation::createNewFile()
{
    string finalFileName = this->fileName + ".replace";
    std::ofstream outFile(finalFileName.c_str());
    if(!outFile.is_open())
    {
        std::cout << "file cant open" << std::endl;
        exit(0);
    }
    outFile << this->content;
    outFile.close();
    std::cout << "islem tamamlandi" << std::endl;
}
