#include "db_response.h"

int main()
{
	db_response *database = new db_response();	
	database->connect();
	database->set_data();
}