#include "ControlInsurance_list.h"
ControlInsurance_list::ControlInsurance_list()
{
	load();
}

void ControlInsurance_list::add(Insurance_List a)
{
	lista_asig[size] = a;
	size++;
}

void ControlInsurance_list::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << lista_asig[i].description() << endl;
	}
}

int ControlInsurance_list::poz(int Insurance_List_insurance_Id)
{
	for (int i = 0; i < size; i++)
	{
		if (lista_asig[i].getInsurance_List_insurance_Id() == Insurance_List_insurance_Id)
		{
			return i;
		}
	}
	return -1;
}

void ControlInsurance_list::Delete(int Insurance_List_insurance_Id)
{
	int p = poz(Insurance_List_insurance_Id);
	for (int i = p; i < size - 1; i++)
	{
		lista_asig[i] = lista_asig[i + 1];
	}
	size--;
}

int ControlInsurance_list::nextId()
{
	if (size == 0) {
		return 1;
	}

	return lista_asig[size - 1].getInsurance_List_id() + 1;
}

void ControlInsurance_list::update_Insurance_List_insurance_Id(int Insurance_List_insurance_Id, int New_Insurance_List_insurance_Id)
{
	int p = poz(Insurance_List_insurance_Id);

	if (p != -1)
	{
		lista_asig[p].setInsurance_List_insurance_Id(New_Insurance_List_insurance_Id);
	}
	else
	{
		cout << "Wrong insurance id" << endl;
	}
}

void ControlInsurance_list::update_Insurance_List_Bike_Id(int Insurance_List_insurance_Id, int New_Insurance_List_Bike_Id)
{
	int p = poz(Insurance_List_insurance_Id);

	if (p != -1)
	{
		lista_asig[p].setInsurance_List_Bike_Id(New_Insurance_List_Bike_Id);
	}
	else
	{
		cout << "Wrong Bike id" << endl;
	}
}

void ControlInsurance_list::update_Insurance_List_insurance_type(int Insurance_List_insurance_Id, string New_Insurance_List_insurance_type)
{
	int p = poz(Insurance_List_insurance_Id);

	if (p != -1)
	{
		lista_asig[p].setInsurance_List_insurance_type(New_Insurance_List_insurance_type);
	}
	else
	{
		cout << "Wrong Insurance type" << endl;
	}
}

Insurance_List* ControlInsurance_list::get_insurance_list(int Insurance_List_insurance_Id, int& nr)
{
	nr = 0;
	Insurance_List* insurance_list = new Insurance_List[100];

	for (int i = 0; i < size; i++) {

		if (lista_asig[i].getInsurance_List_insurance_Id() == Insurance_List_insurance_Id) {

			insurance_list[nr] = lista_asig[i];

			nr++;
		}
	}

	return insurance_list;
}

void ControlInsurance_list::load()
{
	ifstream read("Insurance_List.txt");

	while (!read.eof())
	{
		int Insurance_List_id;
		read >> Insurance_List_id;
		int Insurance_List_insurance_Id;
		read >> Insurance_List_insurance_Id;
		int Insurance_List_Bike_Id;
		read >> Insurance_List_Bike_Id;
		string Insurance_List_insurance_type;
		read >> Insurance_List_insurance_type;
		
		if (Insurance_List_id > 0)
		{
			Insurance_List o(Insurance_List_id, Insurance_List_insurance_Id, Insurance_List_Bike_Id, Insurance_List_insurance_type);
			this->add(o);
		}

	}
}

string ControlInsurance_list::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += lista_asig[i].toSave() + "\n";
	}
	text += lista_asig[i].toSave();
	return text;
}

void ControlInsurance_list::save()
{
	ofstream f("Insurance_List.txt");

	f << this->toSave();

	f.close();
}