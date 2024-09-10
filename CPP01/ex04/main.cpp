



#include <iostream>
#include <fstream>
#include <sstream>
#include <string>




std::string readFileContents(std::string fileName)
{
    std::ifstream file(fileName);
    if(!file.is_open())
    {
        std::cerr << "dosya acilamadi" << fileName << std::endl;
        return "";
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    return buffer.str();

}

std::string findincontent(std::string content, std::string s1, std::string s2)
{
    size_t firstIndex = content.find(s1);
    if(firstIndex == std::string::npos)
    {
        std::cerr << "aranan dize bulunamadi " << s1 << std::endl;
        return content;
    }


    content.erase(firstIndex, s1.length());
    content.insert(firstIndex, s2);
    return content;
    std::cout << content << std::endl;
}

int main(int ac, char **av)
{
    std::string fileName = av[1];
    std::string fileContent = readFileContents(fileName);
    if(fileContent.empty())
    {
        std::cerr << "dosya boş" << std::endl;
        return 1;
    }
    fileContent = findincontent(fileContent, av[2], av[3]);
    std::string finalFileName = fileName + ".replace";
    std::ofstream outfile(finalFileName);
    if(!outfile)
    {
        std::cerr << "dosya açilamadi" << finalFileName << std::endl;
        return 1;
    }

    outfile << fileContent;
    outfile.close();

    std::cout << "işlem tamamlandi" << std:: endl;
}








