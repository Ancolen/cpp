#include "Phone_Book.hpp"

bool isnumeric(string str)
{
	for(size_t i = 0; i < str.length(); i++)
		if(!isdigit(str[i]))
			return false;
	return true;
}

int main()
{
	Phone_Book pb;
	string process;

	while(true)
	{
		std::cout << "Select action." << std::endl;
		std::getline(std::cin, process);
		
		if(process == "ADD")
			pb.Add();
		else if(process == "SEARCH")
		{
			std::cout << "Select index or name, for all contacts: press enter." << std::endl;
			std::getline(std::cin,process);

			if(process.empty())
				pb.Search();
			else if(isnumeric(process))
				pb.Search(atoi(process.c_str()));
			else
				pb.Search(process);
		}
		else if(process == "EXIT")
		{
			std::cout << "bye" << std::endl;
			break;
		}
		else
			std::cout << "sacma sapan konusma la" << std::endl;	
	}
	return 1;
}
