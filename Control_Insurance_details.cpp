#include "Control_Insurance_details.h"

Control_Insurance_details::Control_Insurance_details()
{
	detalii_asig = new Insurance_details * [100];

	load();
}

void Control_Insurance_details::add(Insurance_details* a)
{
	detalii_asig[size] = a;
	size++;
}

void Control_Insurance_details::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << detalii_asig[i]->description() << endl;
	}
}

int Control_Insurance_details::poz(int Insurance_details_insurance_Id)
{
	for (int i = 0; i < size; i++)
	{
		if (detalii_asig[i]->getInsurance_details_insurance_Id() == Insurance_details_insurance_Id)
		{
			return i;
		}
	}
	return -1;
}

void Control_Insurance_details::Delete(int Insurance_details_insurance_Id)
{
	int p = poz(Insurance_details_insurance_Id);

	for (int i = p; i < size - 1; i++)
	{
		detalii_asig[i] = detalii_asig[i + 1];
	}
	size--;
}

int Control_Insurance_details::nextId()
{
	if (size == 0) {
		return 1;
	}

	return detalii_asig[size - 1]->getInsurance_details_id() + 1;
}

void Control_Insurance_details::update_Insurance_details_id(int Insurance_details_insurance_Id, int New_Insurance_details_id)
{
	int p = poz(Insurance_details_insurance_Id);

	if (p != -1)
	{
		detalii_asig[p]->setInsurance_details_id(New_Insurance_details_id);
	}
	else
	{
		cout << "Wrong Insurance details ID" << endl;
	}
}

void Control_Insurance_details::update_Insurance_details_insurance_Id(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_Id)
{
	int p = poz(Insurance_details_insurance_Id);

	if (p != -1)
	{
		detalii_asig[p]->setInsurance_details_insurance_Id(New_Insurance_details_insurance_Id);
	}
	else
	{
		cout << "Wrong Insurance ID" << endl;
	}
}

void Control_Insurance_details::update_Insurance_details_Bike_Id(int Insurance_details_insurance_Id, int New_Insurance_details_Bike_Id)
{
	int p = poz(Insurance_details_insurance_Id);

	if (p != -1)
	{
		detalii_asig[p]->setInsurance_details_Bike_Id(New_Insurance_details_Bike_Id);
	}
	else
	{
		cout << "Wrong Insurance bike ID" << endl;
	}
}

void Control_Insurance_details::update_Insurance_details_insurance_ammount(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_ammount)
{
	int p = poz(Insurance_details_insurance_Id);

	if (p != -1)
	{
		detalii_asig[p]->setInsurance_details_insurance_ammount(New_Insurance_details_insurance_ammount);
	}
	else
	{
		cout << "Wrong Insurance ammount" << endl;
	}
}

void Control_Insurance_details::update_Insurance_details_insurance_price(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_price)
{
	int p = poz(Insurance_details_insurance_Id);

	if (p != -1)
	{
		detalii_asig[p]->setInsurance_details_insurance_price(New_Insurance_details_insurance_price);
	}
	else
	{
		cout << "Wrong Insurance price" << endl;
	}
}

Insurance_details** Control_Insurance_details::get_insurance(int insurance_id, int& nr)
{
	nr = 0;
	Insurance_details** insurance_det = new Insurance_details*[100];

	for (int i = 0; i < size; i++) {

		if (detalii_asig[i]->getInsurance_details_insurance_Id() == insurance_id) {

			insurance_det[nr] = detalii_asig[i];

			nr++;
		}
	}

	return insurance_det;
}

void Control_Insurance_details::load()
{
	ifstream read("Insurance_details.txt");

	while (!read.eof())
	{
		int Insurance_details_id;
		read >> Insurance_details_id;
		int Insurance_details_insurance_Id;
		read >> Insurance_details_insurance_Id;
		int Insurance_details_Bike_Id;
		read >> Insurance_details_Bike_Id;
		int Insurance_details_insurance_ammount;
		read >> Insurance_details_insurance_ammount;
		int Insurance_details_insurance_price;
		read >> Insurance_details_insurance_price;
		
		if (Insurance_details_insurance_Id > 0)
		{
			Insurance_details* o=new Insurance_details(Insurance_details_id, Insurance_details_insurance_Id, Insurance_details_Bike_Id, Insurance_details_insurance_ammount, Insurance_details_insurance_price);
			this->add(o);
		}

	}
}

string Control_Insurance_details::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += detalii_asig[i]->toSave() + "\n";
	}

	text += detalii_asig[i]->toSave();
	return text;
}

void Control_Insurance_details::save()
{
	ofstream f("Insurance_details.txt");

	f << this->toSave();

	f.close();
}