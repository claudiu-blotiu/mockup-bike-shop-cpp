#include "Pegas.h"

Pegas::Pegas(int anAparitie, int bike_id, int bike_customer_id, int bike_nr, string bike_company) :Bike(bike_id, bike_customer_id, bike_nr, "Pegas", bike_company)
{
	this->anAparitie = anAparitie;
}

void Pegas::set_anAparitie(int anAparitie)
{
	this->anAparitie = anAparitie;
}
int Pegas::get_anAparitie()
{
	return this->anAparitie;
}

string Pegas::description()
{
	string text = Bike::description();

	text += "An Aparitie: " + to_string(this->anAparitie) + "\n";

	return text;
}

string Pegas::to_save()
{
	string text = "";

	text += to_string(this->anAparitie) + " ";
	text += to_string(this->getbike_id()) + " ";
	text += to_string(this->getbike_customer_id()) + " ";
	text += to_string(this->getbike_nr()) + " ";
	text += this->getbike_type() + " ";
	text += this->getbike_company();

	return text;
}










