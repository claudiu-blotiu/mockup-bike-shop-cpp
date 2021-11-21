#include "Bike.h"

Bike::Bike(int bike_id, int bike_customer_id, int bike_nr, string bike_type, string bike_company)
{
	this->bike_id = bike_id;
	this->bike_customer_id = bike_customer_id;
	this->bike_nr = bike_nr;
	this->bike_type = bike_type;
	this->bike_company = bike_company;
	
}

void Bike::setbike_id(int bike_id)
{
	this->bike_id = bike_id;
}
int Bike::getbike_id()
{
	return this->bike_id;
}

void Bike::setbike_customer_id(int bike_customer_id)
{
	this->bike_customer_id = bike_customer_id;
}
int Bike::getbike_customer_id()
{
	return this->bike_customer_id;
}

void Bike::setbike_nr(int bike_nr)
{
	this->bike_nr = bike_nr;
}
int Bike::getbike_nr()
{
	return this->bike_nr;
}

void Bike::setbike_type(string bike_type)
{
	this->bike_type = bike_type;
}
string Bike::getbike_type()
{
	return this->bike_type;
}

void Bike::setbike_company(string bike_company)
{
	this->bike_company = bike_company;
}
string Bike::getbike_company()
{
	return this->bike_company;
}

string Bike::description()
{
	string text = "";

	text += "Bike id: " + to_string(this->bike_id) + "\n";
	text += "Bike customer id: " + to_string(this->bike_customer_id) + "\n";
	text += "Bike nr: " + to_string(this->bike_nr) + "\n";
	text += "Bike type: " + this->bike_type + "\n";
	text += "Bike company: " + this->bike_company + "\n";

	return text;
}

string Bike::toSave()
{
	string text = "";

	text += to_string(this->bike_id) + " ";
	text += to_string(this->bike_customer_id) + " ";
	text += to_string(this->bike_nr) + " ";
	text += this->bike_type + " ";
	text += this->bike_company;

	return text;
}










