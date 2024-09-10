#pragma once
#include <string>
#define string std::string
#include <iostream>

class Contact
{
private:
	string names;
	string numbers;
	int id;

public:

	void Set_Name   (string name  ) { names   = name;   }
	void Set_Number (string number) { numbers = number; }
	string Get_Name   (int id) { return names; }
	void Write_All()
	{
		std::cout << names << numbers << std::endl;
	}
};
