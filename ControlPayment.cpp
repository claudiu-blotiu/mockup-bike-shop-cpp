#include "ControlPayment.h"

ControlPayment::ControlPayment()
{
	load();
}

void ControlPayment::add(Payment p)
{
	plata[size] = p;
	size++;
}

void ControlPayment::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << plata[i].description() << endl;
	}
}

int ControlPayment::poz(string payment_date)
{
	for (int i = 0; i < size; i++)
	{
		if (plata[i].getpayment_date() == payment_date)
		{
			return i;
		}
	}
	return -1;
}

void ControlPayment::Delete(string payment_date)
{
	int p = poz(payment_date);

	for (int i = p; i < size - 1; i++)
	{
		plata[i] = plata[i + 1];
	}
	size--;
}

int ControlPayment::nextId()
{
	if (size == 0) {
		return 1;
	}

	return plata[size - 1].getpayment_id() + 1;
}

void ControlPayment::updatepayment_id(string payment_date, int newpayment_id)
{
	int p = poz(payment_date);

	if (p != -1)
	{
		plata[p].setpayment_id(newpayment_id);
	}
	else
	{
		cout << "Wrong payment ID" << endl;
	}
}

void ControlPayment::updatepayment_customer_id(string payment_date, int newpayment_customer_id)
{
	int p = poz(payment_date);

	if (p != -1)
	{
		plata[p].setpayment_customer_id(newpayment_customer_id);
	}
	else
	{
		cout << "Wrong payment customer ID" << endl;
	}
}

void ControlPayment::updatepayment_date(string payment_date, string newpayment_date)
{
	int p = poz(payment_date);

	if (p != -1)
	{
		plata[p].setpayment_date(newpayment_date);
	}
	else
	{
		cout << "Wrong payment date" << endl;
	}
}

void ControlPayment::updatepayment_bill(string payment_date, string newpayment_bill)
{
	int p = poz(payment_date);

	if (p != -1)
	{
		plata[p].setpayment_bill(newpayment_bill);
	}
	else
	{
		cout << "Wrong payment bill" << endl;
	}
}

void ControlPayment::updatepayment_type(string payment_date, string newpayment_type)
{
	int p = poz(payment_date);

	if (p != -1)
	{
		plata[p].setpayment_type(newpayment_type);
	}
	else
	{
		cout << "Wrong payment type" << endl;
	}
}

void ControlPayment::load()
{
	ifstream read("Payment.txt");

	while (!read.eof())
	{
		int payment_id;
		read >> payment_id;
		int payment_customer_id;
		read >> payment_customer_id;
		string payment_date;
		read >> payment_date;
		string payment_bill;
		read >> payment_bill;
		string payment_type;
		read >> payment_type;
		
		if (payment_id > 0)
		{
			Payment a(payment_id, payment_customer_id, payment_date, payment_bill, payment_type);
			this->add(a);
		}
	}
}

string ControlPayment::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += plata[i].toSave() + "\n";
	}

	text += plata[i].toSave();
	return text;
}

void ControlPayment::save()
{
	ofstream f("Payment.txt");

	f << this->toSave();

	f.close();
}












