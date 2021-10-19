#include "ControlPermission.h"

ControlPermission::ControlPermission()
{
	load();
}

void ControlPermission::add(Permission a)
{
	permisiune[size] = a;
	size++;
}

void ControlPermission::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << permisiune[i].description() << endl;
	}
}

int ControlPermission::poz(string permission_title)
{
	for (int i = 0; i < size; i++)
	{
		if (permisiune[i].getpermission_title() == permission_title)
		{
			return i;
		}
	}

	return -1;
}

void ControlPermission::Delete(string permission_title)
{
	int p = poz(permission_title);

	for (int i = p; i < size - 1; i++)
	{
		permisiune[i] = permisiune[i + 1];
	}
	size--;
}

int ControlPermission::nextId()
{
	if (size == 0)
	{
		return 1;
	}

	return permisiune[size - 1].getpermission_id() + 1;
}

void ControlPermission::updatepermission_id(string permission_title, int newpermission_id)
{
	int p = poz(permission_title);

	if (p != -1)
	{
		permisiune[p].setpermission_id(newpermission_id);
	}
	else
	{
		cout << "Wrong permission Id" << endl;
	}
}

void ControlPermission::updatepermission_role_id(string permission_title, int newpermission_role_id)
{
	int p = poz(permission_title);

	if (p != -1)
	{
		permisiune[p].setpermission_role_id(newpermission_role_id);
	}
	else
	{
		cout << "Wrong permission roll" << endl;
	}
}

void ControlPermission::updatepermission_title(string permission_title, string newpermission_title)
{
	int p = poz(permission_title);

	if (p != -1)
	{
		permisiune[p].setpermission_title(newpermission_title);
	}
	else
	{
		cout << "Wrong permission title" << endl;
	}
}

void ControlPermission::updatepermission_module(string permission_title, string newpermission_module)
{
	int p = poz(permission_title);

	if (p != -1)
	{
		permisiune[p].setpermission_module(newpermission_module);
	}
	else
	{
		cout << "Wrong permission module" << endl;
	}
}

void ControlPermission::load()
{
	ifstream read("Permission.txt");

	while (!read.eof())
	{
		int permission_id;
		read >> permission_id;
		int permission_role_id;
		read >> permission_role_id;
		string permission_title;
		read >> permission_title;
		string permission_module;
		read >> permission_module;
		
		if (permission_title != "undefined")
		{
			Permission c(permission_id, permission_role_id, permission_title, permission_module);
			this->add(c);
		}
	}
}

string ControlPermission::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += permisiune[i].toSave() + "\n";
	}

	text += permisiune[i].toSave();
	return text;
}

void ControlPermission::save()
{
	ofstream f("Permission.txt");

	f << this->toSave();

	f.close();
}















