#include "Phone_Book.hpp"

Phone_Book::Phone_Book() : id(0), count(0) { }

void Phone_Book::Add()
{
	string name;
	string surname;
	string nick;
	string number;
	string secret;

	std::cout << "Enter name" << std::endl;
	std::getline(std::cin, name);
	std::cout << "Enter surname" << std::endl;
	std::getline(std::cin, surname);
	std::cout << "Enter nickname" << std::endl;
	std::getline(std::cin, nick);
	std::cout << "Enter number" << std::endl;
	std::getline(std::cin, number);
	std::cout << "Enter secret" << std::endl;
	std::getline(std::cin, secret);

	if(id >= 8)
		id = 0;
	contact[id].Set_Id       (id     );
	contact[id].Set_Name     (name   );
	contact[id].Set_Surname  (surname);
	contact[id].Set_Nickname (nick   );
	contact[id].Set_Number   (number );
	contact[id].Set_Secret   (secret );

	id++;

	if(count < 8)
		count++;
	//std::cout << "Contact added, count: " << count << ", id: " << id << std::endl;
}

void Phone_Book::Search()
{
	for (int id = 0; id < this->count; id++)
		contact[id].Write_All();
}

void Phone_Book::Search(int id)
{
	if (id < 0 || id >= 8 )
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
	contact[id].Write_All_One();
}


void Phone_Book::Search(string name)
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
			contact[id].Write_All_One();
		}
		id++;
	}
	if (i == 0)
		std::cout << "No such contact" << std::endl;	
}
