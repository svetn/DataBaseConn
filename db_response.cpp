#include "db_response.h"

void db_response::connect()
{
	this->conn = mysql_init(0);
	conn = mysql_real_connect(conn,hostname,username,password,database,port,unix_socket,client_flag);

	if (conn)
	{
		cout << "Connected to database" << endl;
	}

	else
	{
		cout << "Failed to connect to database" << endl;
	}

}

void db_response::set_data()
{
	user::get_data();


	string insert_into_query = "INSERT INTO USER_DATA (USER_NAME, USER_SURNAME, USER_EMAIL, USER_PASSWORD) VALUES ('" + this->name + "','"
		+ this->surname + "','" + this->email + "','" + this->user::password + "')";

	const char* insertQ = insert_into_query.c_str();

	int qstate = mysql_query(conn, insertQ);

	if (!qstate)
	{
		cout << "\nData inserted\n";
	}

	else
	{
		cout << "\nCouldn't insert data\n";
	}

}

db_response::db_response()
{
	this->conn = mysql_init(0);
	this->hostname		= "localhost";
	this->username		= "root";
	this->password		= "";
	this->database		= "db_cpptest";
	this->port			= 3306;
	this->unix_socket	= NULL;
	this->client_flag	= 0;
	
}

db_response::~db_response()
{
	delete hostname;
	delete username;
	delete password;
	delete database;
	delete unix_socket;
}
