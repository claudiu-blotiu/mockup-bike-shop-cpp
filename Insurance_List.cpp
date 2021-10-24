#include "Insurance_List.h"

Insurance_List::Insurance_List(int Insurance_List_id, int Insurance_List_insurance_Id, int Insurance_List_Bike_Id, string Insurance_List_insurance_type)
{
	this->Insurance_List_id = Insurance_List_id;
	this->Insurance_List_insurance_Id = Insurance_List_insurance_Id;
	this->Insurance_List_Bike_Id = Insurance_List_Bike_Id;
	this->Insurance_List_insurance_type = Insurance_List_insurance_type;
}

void Insurance_List::setInsurance_List_id(int Insurance_List_id)
{
	this->Insurance_List_id = Insurance_List_id;
}
int Insurance_List::getInsurance_List_id()
{
	return this->Insurance_List_id;
}

void Insurance_List::setInsurance_List_insurance_Id(int Insurance_List_insurance_Id)
{
	this->Insurance_List_insurance_Id = Insurance_List_insurance_Id;
}
int Insurance_List::getInsurance_List_insurance_Id()
{
	return this->Insurance_List_insurance_Id;
}

void Insurance_List::setInsurance_List_Bike_Id(int Insurance_List_Bike_Id)
{
	this->Insurance_List_Bike_Id = Insurance_List_Bike_Id;
}
int Insurance_List::getInsurance_List_Bike_Id()
{
	return this->Insurance_List_Bike_Id;
}

void Insurance_List::setInsurance_List_insurance_type(string Insurance_List_insurance_type)
{
	this->Insurance_List_insurance_type = Insurance_List_insurance_type;
}
string Insurance_List::getInsurance_List_insurance_type()
{
	return this->Insurance_List_insurance_type;
}

string Insurance_List::description()
{
	string text = "";

	text += "Insurance_List_id: " + to_string(this->Insurance_List_id) + "\n";
	text += "Insurance_List_insurance_Id: " + to_string(this->Insurance_List_insurance_Id) + "\n";
	text += "Insurance_List_Bike_Id: " + to_string(this->Insurance_List_Bike_Id) + "\n";
	text += "Insurance_List_insurance_type: " + this->Insurance_List_insurance_type + "\n";

	return text;
}

string Insurance_List::toSave()
{
	string text = "";

	text += to_string(this->Insurance_List_id) + " ";
	text += to_string(this->Insurance_List_insurance_Id) + " ";
	text += to_string(this->Insurance_List_Bike_Id) + " ";
	text += this->Insurance_List_insurance_type;

	return text;
}