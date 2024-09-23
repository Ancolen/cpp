#include "Phone_Book.hpp"
#include <algorithm>

bool isnumeric(string str)
{
	for(int i = 0; i < str.length(); i++)
	{
		if(!isdigit(str[i]))
			return false;
	}
	return true;
}


int main()
{
	Phone_Book pb;
	string process;

	while(true)
	{
		std::cout << "işlem seç" << std::endl;
		std::getline(std::cin, process);
		
		if(process == "add")
			pb.Add();
		else if(process == "search")
		{
			std::cout << "kişi indeksi veya ismini seç, hepsi için enter" << std::endl;
			std::getline(std::cin,process);

			if(process.empty())
				pb.Search();
			else if(isnumeric(process))
				pb.Search(atoi(process.c_str()));
			else
				pb.Search(process);
		}
		else if(process == "exit")
		{
			std::cout << "bye" << std::endl;
			break;
		}
		else
			std::cout << "sacma sapan konusma la" << std::endl;	
	}
	return 1;
}