#include "ControlRole.h"

ControlRole::ControlRole()
{
	load();
}

void ControlRole::add(Role a)
{
	roluri[size] = a;
	size++;
}

void ControlRole::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << roluri[i].description() << endl;
	}
}

int ControlRole::poz(string role_title)
{
	for (int i = 0; i < size; i++)
	{
		if (roluri[i].getrole_title() == role_title)
		{
			return i;
		}
	}
	return -1;
}

void ControlRole::Delete(string role_title)
{
	int p = poz(role_title);

	for (int i = p; i < size - 1; i++)
	{
		roluri[i] = roluri[i + 1];
	}
	size--;
}

int ControlRole::nextId()
{
	if (size == 0)
	{
		return 1;
	}

	return roluri[size - 1].getrole_id() + 1;
}

void ControlRole::updaterole_id(string role_title, int newrole_id)
{
	int p = poz(role_title);

	if (p != -1)
	{
		roluri[p].setrole_id(newrole_id);
	}
	else
	{
		cout << "Wrong role id" << endl;
	}
}

void ControlRole::updaterole_title(string role_title, string newrole_title)
{
	int p = poz(role_title);

	if (p != -1)
	{
		roluri[p].setrole_title(newrole_title);
	}
	else
	{
		cout << "Wrong role id" << endl;
	}
}

void ControlRole::load()
{
	ifstream read("Role.txt");

	while (!read.eof())
	{
		int role_id;
		read >> role_id;
		string role_title;
		read >> role_title;

		if (role_title != "undefined")
		{
			Role r(role_id, role_title);
			this->add(r);
		}
		
	}
}

string ControlRole::toSave()
{
	string text = "";
	int i = 0;
	for (i= 0; i < size-1; i++)
	{
		text += roluri[i].toSave() + "\n";
	}
	text += roluri[i].toSave();
	return text;
}

void ControlRole::save()
{
	ofstream f("Role.txt");

	f << this->toSave();

	f.close();
}












