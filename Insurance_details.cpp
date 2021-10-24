#include "Insurance_details.h"

Insurance_details::Insurance_details(int Insurance_details_id, int Insurance_details_insurance_Id, int Insurance_details_Bike_Id, string Insurance_details_insurance_ammount, int Insurance_details_insurance_price)
{
	this->Insurance_details_id = Insurance_details_id;
	this->Insurance_details_insurance_Id = Insurance_details_insurance_Id;
	this->Insurance_details_Bike_Id = Insurance_details_Bike_Id;
	this->Insurance_details_insurance_ammount = Insurance_details_insurance_ammount;
	this->Insurance_details_insurance_price = Insurance_details_insurance_price;
}

void Insurance_details::setInsurance_details_id(int Insurance_details_id)
{
	this->Insurance_details_id = Insurance_details_id;
}
int Insurance_details::getInsurance_details_id()
{
	return this->Insurance_details_id;
}

void Insurance_details::setInsurance_details_insurance_Id(int Insurance_details_insurance_Id)
{
	this->Insurance_details_insurance_Id = Insurance_details_insurance_Id;
}
int Insurance_details::getInsurance_details_insurance_Id()
{
	return this->Insurance_details_insurance_Id;
}

void Insurance_details::setInsurance_details_Bike_Id(int Insurance_details_Bike_Id)
{
	this->Insurance_details_Bike_Id = Insurance_details_Bike_Id;
}
int Insurance_details::getInsurance_details_Bike_Id()
{
	return this->Insurance_details_Bike_Id;
}

void Insurance_details::setInsurance_details_insurance_ammount(string Insurance_details_insurance_ammount)
{
	this->Insurance_details_insurance_ammount = Insurance_details_insurance_ammount;
}
string Insurance_details::getInsurance_details_insurance_ammount()
{
	return this->Insurance_details_insurance_ammount;
}

void Insurance_details::setInsurance_details_insurance_price(int Insurance_details_insurance_price)
{
	this->Insurance_details_insurance_price = Insurance_details_insurance_price;
}
int Insurance_details::getInsurance_details_insurance_price()
{
	return this->Insurance_details_insurance_price;
}

string Insurance_details::description()
{
	string text = "";

	text += "Insurance_details_id:" + to_string(this->Insurance_details_id) + "\n";
	text += "Insurance_details_insurance_Id: " + to_string(this->Insurance_details_insurance_Id) + "\n";
	text += "Insurance_details_Bike_Id: " + to_string(this->Insurance_details_Bike_Id) + "\n";
	text += "Insurance_details_insurance_ammount: " + this->Insurance_details_insurance_ammount + "\n";
	text += "Insurance_details_insurance_price: " + to_string(this->Insurance_details_insurance_price) + "\n";

	return text;

}

string Insurance_details::toSave()
{
	string text = "";

	text += to_string(this->Insurance_details_id) + " ";
	text += to_string(this->Insurance_details_insurance_Id) + " ";
	text += to_string(this->Insurance_details_Bike_Id)+" ";
	text += this->Insurance_details_insurance_ammount + " ";
	text += to_string(this->Insurance_details_insurance_price);

	return text;
}
