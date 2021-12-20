#include "BMX.h"

BMX::BMX(int varstaMinima, int bike_id, int bike_customer_id, int bike_nr, string bike_company) :Bike(bike_id, bike_customer_id, bike_nr, "BMX", bike_company)
{
	this->varstaMinima = varstaMinima;
}

void BMX::set_varstaMinima(int varstaMinima)
{
	this->varstaMinima = varstaMinima;
}
int BMX::get_varstaMinima()
{
	return this->varstaMinima;
}

string BMX::description()
{
	string text = Bike::description();

	text += "Varsta minima: " + to_string(this->varstaMinima) + "\n";

	return text;
}

string BMX::to_save()
{
	string text ="";

	text +=to_string(this->varstaMinima) + " ";
	text += to_string(this->getbike_id()) + " ";
	text += to_string(this->getbike_customer_id()) + " ";
	text += to_string(this->getbike_nr()) + " ";
	text += this->getbike_type() + " ";
	text += this->getbike_company();

	return text;
}
