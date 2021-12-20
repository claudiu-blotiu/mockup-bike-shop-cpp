#include "ControlCustomer.h"

ControlCustomer::ControlCustomer()
{
	client = new Customer * [100];

	load();
}

void ControlCustomer::add(Customer* a)
{
	client[size] = a;
	size++;
}

void ControlCustomer::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << client[i]->description() << endl;
	}
}

int ControlCustomer::poz(string customer_name)
{
	for (int i = 0; i < size; i++)
	{
		if (client[i]->getcustomer_name() == customer_name)
		{
			return i;
		}
	}

	return -1;
}

void ControlCustomer::Delete(string customer_name)
{
	int p = poz(customer_name);

	for (int i = p; i < size - 1; i++)
	{
		client[i] = client[i + 1];
	}
	size--;
}

int ControlCustomer::nextId()
{
	if (size == 0)
	{
		return 1;
	}

	return client[size - 1]->getcustomer_id() + 1;
}

void ControlCustomer::updatecustomer_id(string customer_name, int newcustomer_id)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_id(newcustomer_id);
	}
	else
	{
		cout << "Wrong customer Id" << endl;
	}
}

void ControlCustomer::updatecustomer_name(string customer_name, string newcustomer_name)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_name(newcustomer_name);
	}
	else
	{
		cout << "Wrong customer name" << endl;
	}
}

void ControlCustomer::updatecustomer_mobile(string customer_name, string newcustomer_mobile)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_mobile(newcustomer_mobile);
	}
	else
	{
		cout << "Wrong customer mobile" << endl;
	}
}

void ControlCustomer::updatecustomer_email(string customer_name, string newcustomer_email)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_email(newcustomer_email);
	}
	else
	{
		cout << "Wrong customer email" << endl;
	}
}

void ControlCustomer::updatecustomer_password(string customer_name, string newcustomer_password)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_password(newcustomer_password);
	}
	else
	{
		cout << "Wrong customer password" << endl;
	}
}

void ControlCustomer::updatecustomer_adress(string customer_name, string newcustomer_adress)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_adress(newcustomer_adress);
	}
	else
	{
		cout << "Wrong customer adress" << endl;
	}
}

void ControlCustomer::updatecustomer_username(string customer_name, string newcustomer_username)
{
	int p = poz(customer_name);

	if (p != -1)
	{
		client[p]->setcustomer_username(newcustomer_username);
	}
	else
	{
		cout << "Wrong customer username" << endl;
	}
}

void ControlCustomer::load()
{
	ifstream read("Customer.txt");

	while (!read.eof())
	{
		int customer_id;
		read >> customer_id;
		string customer_name;
		read >> customer_name;
		string customer_mobile;
		read >> customer_mobile;
		string customer_email;
		read >> customer_email;
		string customer_password;
		read >> customer_password;
		string customer_adress;
		read >> customer_adress;
		string customer_username;
		read >> customer_username;

		if (customer_name != "undefined")
		{
			Customer* c=new Customer(customer_id, customer_name, customer_mobile, customer_email, customer_password, customer_adress, customer_username);
			this->add(c);
		}
	}
}

Customer* ControlCustomer::get_customer(string name)
{
	int pozitie = poz(name);

	return client[pozitie];
}

string ControlCustomer::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += client[i]->toSave() + "\n";
	}

	text += client[i]->toSave();
	return text;
}

void ControlCustomer::save()
{
	ofstream f("Customer.txt");

	f << this->toSave();

	f.close();
}













