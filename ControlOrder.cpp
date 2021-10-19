#include "ControlOrder.h"

ControlOrder::ControlOrder()
{
	load();
}

void ControlOrder::add(Order a)
{
	comanda[size] = a;
	size++;
}

void ControlOrder::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << comanda[i].description() << endl;
	}
}

int ControlOrder::poz(int Order_id)
{
	for (int i = 0; i < size; i++)
	{
		if (comanda[i].getOrder_id() == Order_id)
		{
			return i;
		}
	}
	return -1;
}

void ControlOrder::Delete(int Order_id)
{
	int p = poz(Order_id);

	for (int i = p; i < size - 1; i++)
	{
		comanda[i] = comanda[i + 1];
	}
	size--;
}

int ControlOrder::nextId()
{
	if (size == 0) {
		return 1;
	}

	return comanda[size - 1].getOrder_id() + 1;
}

void ControlOrder::update_Order_id(int Order_id, int New_Order_id)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_id(New_Order_id);
	}
	else
	{
		cout << "Wrong Order ID" << endl;
	}
}

void ControlOrder::update_Order_customerId(int Order_id, int New_Order_customerId)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_customerId(New_Order_customerId);
	}
	else
	{
		cout << "Wrong Order customer ID" << endl;
	}
}

void ControlOrder::update_Order_Adress(int Order_id, string New_Order_Adress)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_Adress(New_Order_Adress);
	}
	else
	{
		cout << "Wrong Order adress" << endl;
	}
}

void ControlOrder::update_Order_Email(int Order_id, string New_Order_Email)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_Email(New_Order_Email);
	}
	else
	{
		cout << "Wrong Order email" << endl;
	}
}

void ControlOrder::update_Order_Date(int Order_id, string New_Order_Date)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_Date(New_Order_Date);
	}
	else
	{
		cout << "Wrong Order Date" << endl;
	}
}

void ControlOrder::update_Order_Status(int Order_id, bool New_Order_Status)
{
	int p = poz(Order_id);

	if (p != -1)
	{
		comanda[p].setOrder_Status(New_Order_Status);
	}
	else
	{
		cout << "Wrong Order status" << endl;
	}
}

void ControlOrder::load()
{
	ifstream read("Order.txt");

	while (!read.eof())
	{
		int Order_id;
		read >> Order_id;
		int Order_customerId;
		read >> Order_customerId;
		string Order_Adress;
		read >> Order_Adress;
		string Order_Email;
		read >> Order_Email;
		string Order_Date;
		read >> Order_Date;
		bool Order_status;
		read >> Order_status;

		if (Order_customerId > 0)
		{
			Order o(Order_id, Order_customerId,Order_Adress, Order_Email, Order_Date, Order_status);
			this->add(o);
		}

	}
}

string ControlOrder::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += comanda[i].toSave() + "\n";
	}

	text += comanda[i].toSave();
	return text;
}

void ControlOrder::save()
{
	ofstream f("Order.txt");

	f << this->toSave();

	f.close();
}



