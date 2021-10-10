#include "ControlUser.h"

ControlUser::ControlUser()
{
	load();
}

void ControlUser::add(User u)
{
	utilizator[size]=u;
	size++;
}

void ControlUser::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << utilizator[i].description() << endl;
	}
}

int ControlUser::poz(string user_name)
{
	for (int i = 0; i < size; i++)
	{
		if (utilizator[i].getuser_name() == user_name)
		{
			return i;
		}
	}
	return -1;
}

void ControlUser::Delete(string user_name)
{
	int p = poz(user_name);
	for (int i = p; i < size - 1; i++)
	{
		utilizator[i] = utilizator[i + 1];
	}
	size--;
}

int ControlUser::nextId()
{
	if (size == 0) {
		return 1;
	}

	return utilizator[size - 1].getuser_id() + 1;
}

void ControlUser::updateuser_id(string user_name, int newuser_id)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_id(newuser_id);
	}
	else
	{
		cout << "Wrong User id" << endl;
	}
}

void ControlUser::updateuser_role_id(string user_name, int newuser_role_id)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_role_id(newuser_role_id);
	}
	else
	{
		cout << "Wrong User role id" << endl;
	}
}

void ControlUser::updateuser_name(string user_name, string newuser_name)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_name(newuser_name);
	}
	else
	{
		cout << "Wrong User name" << endl;
	}
}

void ControlUser::updateuser_email(string user_name, string newuser_email)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_email(newuser_email);
	}
	else
	{
		cout << "Wrong User email" << endl;
	}
}

void ControlUser::updateuser_Dob(string user_name, string newuser_Dob)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_Dob(newuser_Dob);
	}
	else
	{
		cout << "Wrong User Date of birth" << endl;
	}
}

void ControlUser::updateuser_adress(string user_name, string newuser_adress)
{
	int p = poz(user_name);

	if (p != -1)
	{
		utilizator[p].setuser_adress(newuser_adress);
	}
	else
	{
		cout << "Wrong User adress" << endl;
	}
}

void ControlUser::load()
{
	ifstream read("User.txt");

	while (!read.eof())
	{
		int user_id;
		read >> user_id;
		int user_role_id;
		read >> user_role_id;
		string user_name;
		read >> user_name;
		string user_email;
		read >> user_email;
		string user_Dob;
		read >> user_Dob;
		string user_adress;
		read >> user_adress;

		User a(user_id, user_role_id, user_name, user_email, user_Dob, user_adress);
		this->add(a);
	}
	
}

string ControlUser::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += utilizator[i].toSave() + "\n";
	}

	text += utilizator[i].toSave();
	return text;
}

void ControlUser::save()
{
	ofstream f("User.txt");

	f << this->toSave();

	f.close();
}















