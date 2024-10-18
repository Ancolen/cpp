#pragma once
#include <string>
#include <iostream>
#include <iomanip>

using std::string;

class Contact
{
private:
	int    Id      ;
	string Name    ;
	string Surname ;
	string Nickname;
	string Number  ;
	string Secret  ;

	string Calculate(string str);

public:

	void   Set_Id         (int    id     ) ;
	void   Set_Name       (string name   ) ;
	void   Set_Surname    (string surname) ;
	void   Set_Nickname   (string nick   ) ;
	void   Set_Number     (string number ) ;
	void   Set_Secret     (string secret ) ;

	string Get_Id         (              ) ;
	string Get_Name       (              ) ;
	string Get_Surname    (              ) ;
	string Get_Nickname   (              ) ;
	string Get_Number     (              ) ;
    string Get_Secret     (              ) ;

	void	Write_All     (              ) ;
	void 	Write_All_One (              ) ;
};
