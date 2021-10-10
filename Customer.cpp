#include "Customer.h"

Customer::Customer(int customer_id, string customer_name, string customer_mobile, string customer_email, string customer_password, string customer_adress, string customer_username)
{
	this->customer_id = customer_id;
	this->customer_name = customer_name;
	this->customer_mobile = customer_mobile;
	this->customer_email = customer_email;
	this->customer_password = customer_password;
	this->customer_adress = customer_adress;
	this->customer_username = customer_username;
}

void Customer::setcustomer_id(int customer_id)
{
	this->customer_id = customer_id;
}
int Customer::getcustomer_id()
{
	return this->customer_id;
}

void Customer::setcustomer_name(string customer_name)
{
	this->customer_name = customer_name;
}
string Customer::getcustomer_name()
{
	return this->customer_name;
}

void Customer::setcustomer_mobile(string customer_mobile)
{
	this->customer_mobile = customer_mobile;
}
string Customer::getcustomer_mobile()
{
	return this->customer_mobile;
}

void Customer::setcustomer_email(string customer_email)
{
	this->customer_email = customer_email;
}
string Customer::getcustomer_email()
{
	return this->customer_email;
}

void Customer::setcustomer_password(string customer_password)
{
	this->customer_password = customer_password;
}
string Customer::getcustomer_password()
{
	return this->customer_password;
}

void Customer::setcustomer_adress(string customer_adress)
{
	this->customer_adress = customer_adress;
}
string Customer::getcustomer_adress()
{
	return this->customer_adress;
}

void Customer::setcustomer_username(string customer_username)
{
	this->customer_username = customer_username;
}
string Customer::getcustomer_username()
{
	return this->customer_username;
}

string Customer::description()
{
	string text = "";

	text += "customer_id: " + to_string(this->customer_id) + "\n";
	text += "customer_name: " + this->customer_name + "\n";
	text += "customer_mobile: " + this->customer_mobile + "\n";
	text += "customer_email: " + this->customer_email + "\n";
	text += "customer_password: " + this->customer_password + "\n";
	text += "customer_adress: " + this->customer_adress + "\n";
	text += "customer_username: " + this->customer_username + "\n";

	return text;
}

string Customer::toSave()
{
	string text = "";

	text += to_string(this->customer_id) + " ";
	text += this->customer_name + " ";
	text += this->customer_mobile + " ";
	text += this->customer_email + " ";
	text +=	this->customer_password + " ";
	text += this->customer_adress + " ";
	text += this->customer_username;

	return text;
}









