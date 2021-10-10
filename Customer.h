#include"ControlBooking.h"

class Customer
{
private:

	int customer_id = 1;
	string customer_name = "";
	string customer_mobile = "";
	string customer_email = "";
	string customer_password = "";
	string customer_adress = "";
	string customer_username = "";

public:

	Customer()
	{

	}
	Customer(int, string, string, string, string, string, string);

	void setcustomer_id(int);
	int getcustomer_id();

	void setcustomer_name(string);
	string getcustomer_name();

	void setcustomer_mobile(string);
	string getcustomer_mobile();

	void setcustomer_email(string);
	string getcustomer_email();

	void setcustomer_password(string);
	string getcustomer_password();

	void setcustomer_adress(string);
	string getcustomer_adress();

	void setcustomer_username(string);
	string getcustomer_username();

	string description();

	string toSave();








};

