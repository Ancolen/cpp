#pragma once
#include <string>
#define string std::string
#include <iostream>
#include "Contact.h"
#include <cstring>
class Phone_Book
{
private:

	Contact contact[7];
	int id = 0;
	int count = 0;

public:

	void Add(string name, string surname, string nickname, string number, string secret)
	{
		if(id == 8)
			id = 0;

		contact[id].Set_Name     (name    );
		contact[id].Set_Surname  (surname );
		contact[id].Set_Nickname (nickname);
		contact[id].Set_Number   (number  );
		contact[id].Set_Secret   (secret  );
		id++;

		if(count <= 8)
			count++;
	}

	void Search()
	{
		for (int id = 0; id < this->count; id++)
			contact[id].Write_All();
	}

	void Search(string name)
	{
		int id = 0;
		int i = 0;
		string tmp = "";
		while (id < this->count)
		{
			tmp = contact[id].Get_Name();
			if (strstr(tmp.c_str(), name.c_str()))
			{
				i++;
				contact[id].Write_All();
			}
			id++;
		}
		if (i == 0)
			std::cout << "No such contact" << std::endl;
	}

	void Search(int id)
	{
		id--;
		if (id < 0 || id > 8 )
		{
			std::cout << "No such contact" << std::endl;
			return;
		}

		string name = contact[id].Get_Name();
		
		if (name == "")
		{
			std::cout << "No such contact" << std::endl;
			return;
		}
		contact[id].Write_All();
	}
};
