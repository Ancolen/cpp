#include "manipulation.hpp"

manipulation::manipulation(string fileName, string s1, string s2) : fileName(fileName), s1(s1), s2(s2)
{
    // __f.open(fileName.c_str());
    // if(!__f.is_open())
    // {
    //     std::cerr << "file cant open" << std::endl;
    //     std::exit(0);
    // }
}

manipulation::~manipulation()
{
    if(__f.is_open())
        __f.close();
    std::cout << "kapandi" << std::endl;
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
        std::cerr << "file cant open" << std::endl;
        std::exit(0);
    }
}

void manipulation::fileContent()
{
    std::stringstream buffer;
    buffer << __f.rdbuf();
    string str = buffer.str();
    if(str.empty())
    {
        std::cerr << "empty file" << std::endl;
        std::exit(0);
    }
    this->content = str;
}

void manipulation::findAndReplace()
{
    size_t firstIndex = content.find(this->s1);
    if(firstIndex == string::npos)
    {
        std::cerr << "Searched string not found" << std::endl;
        std::exit(0);
    }
    this->content.erase(firstIndex, this->s1.length());
    this->content.insert(firstIndex, this->s2);
}

void manipulation::createNewFile()
{
    string finalFileName = this->fileName + ".replace";
    std::ofstream outFile(finalFileName);
    if(!outFile)
    {
        std::cerr << "file cant open" << std::endl;
        std::exit(0);
    }
    outFile << this->content;
    outFile.close();
    std::cout << "islem tamamlandi" << std::endl;
}
