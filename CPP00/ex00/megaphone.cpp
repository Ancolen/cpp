#include <iostream>

int main(int argc, char **argv)
{  
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    else
    {
        int i = 0, j;
        std::string str;

        while (argv[++i])
        {
            j = -1;
            while (argv[i][++j])
                str += std::toupper(argv[i][j]);
        }
        std::cout << str << "\n";
    }
}
