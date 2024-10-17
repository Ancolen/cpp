#include "Harl.hpp"


int main()
{
    Harl harl                                        ;
    harl.complain("INFO"                           ) ;
    harl.complain("DEBUG"                          ) ;
    harl.complain("WARNING"                        ) ;
    harl.complain("ERROR"                          ) ;
    harl.complain(""                               ) ;
    harl.complain("You are a worker, stay a worker") ;
}