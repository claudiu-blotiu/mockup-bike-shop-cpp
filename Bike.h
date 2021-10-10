#include"ControlUser.h"
class Bike
{
private:
	
	int bike_id = 1;
	int bike_customer_id = 1;
	string bike_nr = "";
	string bike_type = "";
	string bike_company = "";
	
public:

	Bike()
	{

	}
	Bike(int, int, string, string, string);

	void setbike_id(int);
	int getbike_id();

	void setbike_customer_id(int);
	int getbike_customer_id();

	void setbike_nr(string);
	string getbike_nr();

	void setbike_type(string);
	string getbike_type();

	void setbike_company(string);
	string getbike_company();

	string description();

	string toSave();









};

