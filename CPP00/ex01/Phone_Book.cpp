#include "Phone_Book.h"
#include <iostream>

int main()
{
	Phone_Book pb;
	string name;
	string number;
	string process;
	while (true)
	{
		std::cout << "What is the action you want to perform (add, search, exit)" <<std::endl;
		std::cin >> process;

		if (process == "add")
		{
			std::cin >> name >> number;
			pb.Add(name, number);
		}
		else if (process == "search")
		{
			pb.Search();
		}
		else if(process == "exit")
			return 1;

	}
	//std::cout << "Name: " << name << " Number: " << number << std::endl;
}