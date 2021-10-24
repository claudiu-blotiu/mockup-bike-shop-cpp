#include "Insurance.h"

Insurance::Insurance(int insurance_id, int insurance_bike_id, string insurance_ammount, string insurance_type, string insurance_date, string insurance_number, string insurance_expire,int insurance_price)
{
	this->insurance_id = insurance_id;
	this->insurance_bike_id = insurance_bike_id;
	this->insurance_ammount = insurance_ammount;
	this->insurance_type = insurance_type;
	this->insurance_date = insurance_date;
	this->insurance_number = insurance_number;
	this->insurance_expire = insurance_expire;
	this->insurance_price = insurance_price;
}

void Insurance::setinsurance_id(int insurance_id)
{
	this->insurance_id = insurance_id;
}
int Insurance::getinsurance_id()
{
	return this->insurance_id;
}

void Insurance::setinsurance_bike_id(int insurance_bike_id)
{
	this->insurance_bike_id = insurance_bike_id;
}
int Insurance::getinsurance_bike_id()
{
	return this->insurance_bike_id;
}

void Insurance::setinsurance_ammount(string insurance_ammount)
{
	this->insurance_ammount = insurance_ammount;
}
string Insurance::getinsurance_ammount()
{
	return this->insurance_ammount;
}

void Insurance::setinsurance_type(string insurance_type)
{
	this->insurance_type = insurance_type;
}
string Insurance::getinsurance_type()
{
	return this->insurance_type;
}

void Insurance::setinsurance_date(string insurance_date)
{
	this->insurance_date = insurance_date;
}
string Insurance::getinsurance_date()
{
	return this->insurance_date;
}

void Insurance::setinsurance_number(string insurance_number)
{
	this->insurance_number = insurance_number;
}
string Insurance::getinsurance_number()
{
	return this->insurance_number;
}

void Insurance::setinsurance_expire(string insurance_expire)
{
	this->insurance_expire = insurance_expire;
}
string Insurance::getinsurance_expire()
{
	return this->insurance_expire;
}

void Insurance::setinsurance_price(int insurance_price)
{
	this->insurance_price = insurance_price;
}
int Insurance::getinsurance_price()
{
	return this->insurance_price;
}

string Insurance::description()
{
	string text = "";

	text += "Insurance id: " + to_string(this->insurance_id) + "\n";
	text += "Insurance bike id: " + to_string(this->insurance_bike_id) + "\n";
	text += "insurance_ammount: " + this->insurance_ammount + "\n";
	text += "insurance_type: " + this->insurance_type + "\n";
	text += "insurance_date: " + this->insurance_date + "\n";
	text += "insurance_number: " + this->insurance_number + "\n";
	text += "insurance_expire: " + this->insurance_expire + "\n";
	text += "insurance_price: " + to_string(this->insurance_price) + "\n";

	return text;
}

string Insurance::toSave()
{
	string text = "";

	text += to_string(this->insurance_id) + " ";
	text += to_string(this->insurance_bike_id) + " ";
	text += this->insurance_ammount + " ";
	text += this->insurance_type + " ";
	text += this->insurance_date + " ";
	text += this->insurance_number + " ";
	text += this->insurance_expire + " ";
	text += this->insurance_price;

	return text;
}













