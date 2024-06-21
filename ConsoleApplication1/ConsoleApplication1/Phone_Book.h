#pragma once
#include <string>
#define string std::string
#include <iostream>
#include "Contact.h"
__interface IInterface
{

};
class Phone_Book
{
public:
	Contact c[7];
	int id = 0;
	int cnt = 0;
	void Add(string name, string number)
	{
		if(id == 7)
			id = 0;
		c[id].Set_Name(name);
		c[id].Set_Number(number);
		id++;
		if(cnt <= 7)
			cnt++;
	}

	void Search()
	{
		int id = 0;
		while(id <= cnt )
		{
			c[id].Write_All();
			id++;
		}
		id = 0;
		//int id = 0;
		//while (id <= 8)
		//{
		//	if(names[id] == "")
		//		break;
		//	std::cout << names[id] << numbers[id] << std::endl;
		//	id++;
		//}
	}
};
