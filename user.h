#pragma once

#include <iostream>

#include <mysql.h>

#include <string>

#include <iostream>



using std::cout;
using std::cin;
using std::endl;
using std::string;

class user
{
protected:
	string name;
	string surname;
	string email;
	string password;

public:
	void get_data();

public:
	user();
};

