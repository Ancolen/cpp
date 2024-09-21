#include "Phone_Book.h"
//#include <iostream>
//#include <sstream>
#include <algorithm>

int main()
{
	Phone_Book pb;
	string name;
	string surname;
	string nickname;
	string number;
	string secret;
	string process;
	while (true)
	{
		std::cout << "What is the action you want to perform (add, search, exit)" <<std::endl;
		std::cin >> process;

		if (process == "add")
		{
			std::cout << "Enter name"          << std::endl;
			std::cin  >> name                              ;
			std::cout << "Enter surname"       << std::endl;
			std::cin  >> surname                           ;
			std::cout << "Enter nickname"      << std::endl;
			std::cin  >> nickname                          ;
			std::cout << "Enter number"        << std::endl;
			std::cin  >> number                            ;
			std::cout << "Enter secret"        << std::endl;
			std::cin  >> secret                            ;

			pb.Add(name, surname, nickname, number, secret);
		}
		else if (process == "search")
		{
			string input;
			getline(std::cin, input);

			std::cout << "Enter index to search (or press Enter to list all): ";
			getline(std::cin, input);

			if (input.empty())
			{
				pb.Search();
			}
			else
			{
				if (std::all_of(input.begin(), input.end(), [](char c){ return std::isdigit(c);}))
					pb.Search(atoi(input.c_str()));
				else
					pb.Search(input);
			}
		}
		else if (process == "exit")
			return 1;
		else
			std::cout << "Invalid input" << std::endl;
	}
}