#include "user.h"


void user::get_data()
{
	cout << "Name: ";
	getline(cin, this->name);

	cout << "Surname: ";
	getline(cin, this->surname);

	cout << "Email: ";
	getline(cin, this->email);

	cout << "Password: ";
	getline(cin, this->password);
}


user::user()
{
	this->name			= "";
	this->surname		= "";
	this->email			= "";
	this->password		= "";
}
