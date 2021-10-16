#include "ControlBike.h"

ControlBike::ControlBike()
{
	load();
}

void ControlBike::add(Bike b)
{
	bicicleta[size] = b;
	size++;
}

void ControlBike::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << bicicleta[i].description() << endl;
	}
}

int ControlBike::poz(string bike_nr)
{
	for (int i = 0; i < size; i++)
	{
		if (bicicleta[i].getbike_nr() == bike_nr)
		{
			return i;
		}
	}
	return -1;
}

void ControlBike::Delete(string bike_nr)
{
	int p = poz(bike_nr);
	for (int i = p; i < size - 1; i++)
	{
		bicicleta[i] = bicicleta[i + 1];
	}
	size--;
}

int ControlBike::nextId()
{
	if (size == 0) {
		return 1;
	}

	return bicicleta[size - 1].getbike_id() + 1;
}

void ControlBike::updatebike_id(string bike_nr, int newbike_id)
{
	int p = poz(bike_nr);

	if (p != -1)
	{
		bicicleta[p].setbike_id(newbike_id);
	}
	else
	{
		cout << "Wrong Bike id" << endl;
	}
}

void ControlBike::updatebike_customer_id(string bike_nr, int newbike_customer_id)
{
	int p = poz(bike_nr);

	if (p != -1)
	{
		bicicleta[p].setbike_customer_id(newbike_customer_id);
	}
	else
	{
		cout << "Wrong  Bike Customer id" << endl;
	}
}

void ControlBike::updatebike_nr(string bike_nr, string newbike_nr)
{
	int p = poz(bike_nr);

	if (p != -1)
	{
		bicicleta[p].setbike_nr(newbike_nr);
	}
	else
	{
		cout << "Wrong Bike Number" << endl;
	}
}

void ControlBike::updatebike_type(string bike_nr, string newbike_type)
{
	int p = poz(bike_nr);

	if (p != -1)
	{
		bicicleta[p].setbike_type(newbike_type);
	}
	else
	{
		cout << "Wrong Bike Type" << endl;
	}
}

void ControlBike::updatebike_company(string bike_nr, string newbike_company)
{
	int p = poz(bike_nr);

	if (p != -1)
	{
		bicicleta[p].setbike_company(newbike_company);
	}
	else
	{
		cout << "Wrong Bike Company" << endl;
	}
}

Bike ControlBike::get_product(string name)
{
	int pozitie = poz(name);

	return bicicleta[pozitie];
}

Bike ControlBike::get_product_cos(int bike_id)
{
	for (int i = 0; i < size; i++)
	{
		if (bicicleta[i].getbike_id() == bike_id)
		{
			return bicicleta[i];
		}
	}
}

void ControlBike::load()
{
	ifstream read("Bike.txt");

	while (!read.eof())
	{
		int bike_id;
		read >> bike_id;
		int bike_customer_id;
		read >> bike_customer_id;
		string bike_nr;
		read >> bike_nr;
		string bike_type;
		read >> bike_type;
		string bike_company;
		read >> bike_company;
		
		Bike a(bike_id, bike_customer_id, bike_nr, bike_type, bike_company);
		this->add(a);
	}
}

string ControlBike::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += bicicleta[i].toSave() + "\n";
	}

	text += bicicleta[i].toSave();
	return text;
}

void ControlBike::save()
{
	ofstream f("Bike.txt");

	f << this->toSave();

	f.close();
}










