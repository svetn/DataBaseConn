#pragma once

#include "user.h"

#include <sstream>


class db_response: user
{
private:
	MYSQL* conn;

private:
	const char*		hostname;
	const char*		username;
	const char*		password;
	const char*		database;
	unsigned int	port;
	const char*		unix_socket;
	unsigned long 	client_flag;

public:
	void connect();
	void set_data();

public:
	db_response();
	~db_response();

};


