#include "Payment.h"

Payment::Payment(int payment_id, int payment_customer_id, string payment_date, string payment_bill, string payment_type)
{
	this->payment_id = payment_id;
	this->payment_customer_id = payment_customer_id;
	this->payment_date = payment_date;
	this->payment_bill = payment_bill;
	this->payment_type = payment_type;
}

void Payment::setpayment_id(int payment_id)
{
	this->payment_id = payment_id;
}
int Payment::getpayment_id()
{
	return this->payment_id;
}

void Payment::setpayment_customer_id(int payment_customer_id)
{
	this->payment_customer_id = payment_customer_id;
}
int Payment::getpayment_customer_id()
{
	return this->payment_customer_id;
}

void Payment::setpayment_date(string payment_date)
{
	this->payment_date = payment_date;
}
string Payment::getpayment_date()
{
	return this->payment_date;
}

void Payment::setpayment_bill(string payment_bill)
{
	this->payment_bill = payment_bill;
}
string Payment::getpayment_bill()
{
	return this->payment_bill;
}

void Payment::setpayment_type(string payment_type)
{
	this->payment_type = payment_type;
}
string Payment::getpayment_type()
{
	return this->payment_type;
}

string Payment::description()
{
	string text = "";

	text += "payment_id: " + to_string(this->payment_id) + "\n";
	text += "payment_customer_id: " + to_string(this->payment_customer_id) + "\n";
	text += "payment_date: " + this->payment_date + "\n";
	text += "payment_bill: " + this->payment_bill + "\n";
	text += "payment_type: " + this->payment_type + "\n";

	return text;
}

string Payment::toSave()
{
	string text = "";

	text += to_string(this->payment_id) + " ";
	text += to_string(this->payment_customer_id) + " ";
	text += this->payment_date + " ";
	text += this->payment_bill + " ";
	text += this->payment_type;

	return text;
}








