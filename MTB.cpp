#include "MTB.h"

MTB::MTB(string tipCadru, int bike_id, int bike_customer_id, int bike_nr, string bike_company) :Bike(bike_id, bike_customer_id, bike_nr, "MTB", bike_company)
{
	this->tipCadru = tipCadru;
}

void MTB::set_tipCadru(string tipCadru)
{
	this->tipCadru = tipCadru;
}
string MTB::get_tipCadru()
{
	return this->tipCadru;
}

string MTB::description()
{
	string text = Bike::description();

	text += "Tip Cadru: " + this->tipCadru + "\n";

	return text;
}

string MTB::to_save()
{
	string text = "";

	text += this->tipCadru + " ";
	text += to_string(this->getbike_id()) + " ";
	text += to_string(this->getbike_customer_id()) + " ";
	text += to_string(this->getbike_nr()) + " ";
	text += this->getbike_type() + " ";
	text += this->getbike_company();

	return text;
}

