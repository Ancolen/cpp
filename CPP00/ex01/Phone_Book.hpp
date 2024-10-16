#pragma once
#include "Contact.hpp"
#include <cstring>

class Phone_Book
{
private:

	Contact contact[8];
	int id;
	int count;

public:

	Phone_Book();

	void Add() ;

	void Search();

	void Search(string name);

	void Search(int id) ;
};
