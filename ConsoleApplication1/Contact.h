#pragma once
#include <string>
#define string std::string
#include <iostream>
#include <iomanip>

class Contact
{
private:
	string Name;
	string Surname;
	string Nickname;
	string Number;
	string Secret;

	string Calculate(string str)
	{
		if (str.length() > 10)
		{
			str = str.substr(0, 9) + '.';
		}
		else if (str.length() < 10)
		{
			str.insert(str.begin(), 10 - str.length(), ' ');
		}
		return str;
	}

public:

	void   Set_Name     (string name   ) {this->Name     = Calculate(name)   ; }
	void   Set_Surname  (string surname) {this->Surname  = Calculate(surname); }
	void   Set_Nickname (string nick   ) {this->Nickname = Calculate(nick)   ; }
	void   Set_Number   (string number ) {this->Number   = Calculate(number) ; }
	void   Set_Secret   (string secret ) {this->Secret   = secret			 ; }


	string Get_Name     (              ) { return    this->Name    ; }
	string Get_Surname  (              ) { return    this->Surname ; }
	string Get_Nickname (              ) { return    this->Nickname; }
	string Get_Number   (              ) { return    this->Number  ; }
  //string Get_Secret   (              ) { return    this->Secret  ; }

	void   Write_All()
	{
		std::cout << std::setw(10) << Name     << "|";
		std::cout << std::setw(10) << Surname  << "|";
		std::cout << std::setw(10) << Nickname << "|";
		std::cout << std::setw(10) << Number   << "|";
		std::cout << std::endl;
	}
};
