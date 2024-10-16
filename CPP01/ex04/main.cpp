#include "manipulation.hpp"

int main(int ac, char **av)
{
    if(ac < 4)
        return 0;

    string filename = av[1];
    string s1 = av[2];
    string s2 = av[3];
    manipulation m(filename, s1, s2);
    m.replaceFile();
}
