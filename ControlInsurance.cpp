#include "ControlInsurance.h"

ControlInsurance::ControlInsurance()
{
	load();
}

void ControlInsurance::add(Insurance i)
{
	asigurare[size] = i;
	size++;
}

void ControlInsurance::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << asigurare[i].description() << endl;
	}
}

int ControlInsurance::poz(string insurance_type)
{
	for (int i = 0; i < size; i++)
	{
		if (asigurare[i].getinsurance_type() == insurance_type)
		{
			return i;
		}
	}
	return -1;
}

int ControlInsurance::poz_asig(int insurance_id)
{
	for (int i = 0; i < size; i++)
	{
		if (asigurare[i].getinsurance_id() == insurance_id)
		{
			return i;
		}
	}
	return -1;
}

void ControlInsurance::Delete(string insurance_number)
{
	int p = poz(insurance_number);
	for (int i = p; i < size - 1; i++)
	{
		asigurare[i] = asigurare[i + 1];
	}
	size--;
}

int ControlInsurance::nextId()
{
	if (size == 0) {
		return 1;
	}

	return asigurare[size - 1].getinsurance_id() + 1;
}

void ControlInsurance::updateinsurance_id(string insurance_number, int newinsurance_id)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_id(newinsurance_id);
	}
	else
	{
		cout << "Wrong Insurance id" << endl;
	}
}

void ControlInsurance::updateinsurance_bike_id(string insurance_number, int newinsurance_bike_id)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_bike_id(newinsurance_bike_id);
	}
	else
	{
		cout << "Wrong Insurance Bike id" << endl;
	}
}

void ControlInsurance::updateinsurance_ammount(string insurance_number, string newinsurance_ammount)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_ammount(newinsurance_ammount);
	}
	else
	{
		cout << "Wrong Insurance ammount" << endl;
	}
}

void ControlInsurance::updateinsurance_type(string insurance_number, string newinsurance_type)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_type(newinsurance_type);
	}
	else
	{
		cout << "Wrong Insurance type" << endl;
	}
}

void ControlInsurance::updateinsurance_date(string insurance_number, string newinsurance_date)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_date(newinsurance_date);
	}
	else
	{
		cout << "Wrong Insurance date" << endl;
	}
}

void ControlInsurance::updateinsurance_number(string insurance_number, string newinsurance_number)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_number(newinsurance_number);
	}
	else
	{
		cout << "Wrong Insurance number" << endl;
	}
}

void ControlInsurance::updateinsurance_expire(string insurance_number, string newinsurance_expire)
{
	int p = poz(insurance_number);

	if (p != -1)
	{
		asigurare[p].setinsurance_expire(newinsurance_expire);
	}
	else
	{
		cout << "Wrong Insurance expire date" << endl;
	}
}

Insurance ControlInsurance::get_insurance1(int insurance_id)
{
	int pozitie = poz_asig(insurance_id);

	return asigurare[pozitie];
}

Insurance ControlInsurance::get_insurance2(string insurance_type)
{
	int pozitie = poz(insurance_type);

	return asigurare[pozitie];
}

void ControlInsurance::load()
{
	ifstream read("Insurance.txt");

	while (!read.eof())
	{
		int insurance_id;
		read >> insurance_id;
		int insurance_bike_id;
		read >> insurance_bike_id;
		string insurance_ammount;
		read >> insurance_ammount;
		string insurance_type;
		read >> insurance_type;
		string insurance_date;
		read >> insurance_date;
		string insurance_number;
		read >> insurance_number;
		string insurance_expire;
		read >> insurance_expire;
		int insurance_price;
		read >> insurance_price;

		if (insurance_id > 0)
		{
			Insurance a(insurance_id, insurance_bike_id, insurance_ammount, insurance_type, insurance_date, insurance_number, insurance_expire, insurance_price);
			this->add(a);
		}
	}
}

string ControlInsurance::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += asigurare[i].toSave() + "\n";
	}

	text += asigurare[i].toSave();
	return text;
}

void ControlInsurance::save()
{
	ofstream f("Insurance.txt");

	f << this->toSave();

	f.close();
}












