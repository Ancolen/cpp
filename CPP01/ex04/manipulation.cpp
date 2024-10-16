

#include "manipulation.hpp"




manipulation::manipulation(string fileName, string s1, string s2) : fileName(fileName), s1(s1), s2(s2)
{
    __f.open(fileName.c_str());
    if(!__f.is_open())
        std::cerr << "dosya acilamadi" << std::endl;
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
        std::cerr << "dosya acilamadi" << std::endl;
}

void manipulation::fileContent()
{
    std::stringstream buffer;
    buffer << __f.rdbuf();
    string str = buffer.str();
    if(str.empty())
        std::cerr << "dosya bos" << std::endl;
    this->content = str;
}

void manipulation::findAndReplace()
{
    size_t firstIndex = content.find(this->s1);
    if(firstIndex == string::npos)
        std::cerr << "aranan dize bulunamadi" << std::endl;
    this->content.erase(firstIndex, this->s1.length());
    this->content.insert(firstIndex, this->s2);
}

void manipulation::createNewFile()
{
    string finalFileName = this->fileName + ".replace";
    std::ofstream outFile(finalFileName);
    if(!outFile)
        std::cerr << "dosya acilamadi" << std::endl;
    outFile << this->content;
    outFile.close();
    std::cout << "islem tamamlandi" << std::endl;
}
