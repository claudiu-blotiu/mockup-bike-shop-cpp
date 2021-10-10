#include "Order.h"

Order::Order(int Order_id, int Order_customerId, int Order_ammount, string Order_Adress, string Order_Email, string Order_Date, bool Order_Status)
{
	this->Order_id = Order_id;
	this->Order_customerId = Order_customerId;
	this->Order_ammount = Order_ammount;
	this->Order_Adress = Order_Adress;
	this->Order_Email = Order_Email;
	this->Order_Date = Order_Date;
	this->Order_Status = Order_Status;

}

void Order::setOrder_id(int Order_id)
{
	this->Order_id = Order_id;
}
int Order::getOrder_id()
{
	return this->Order_id;
}

void Order::setOrder_customerId(int Order_customerId)
{
	this->Order_customerId = Order_customerId;
}
int Order::getOrder_customerId()
{
	return this->Order_customerId;
}

void Order::setOrder_ammount(int Order_ammount)
{
	this->Order_ammount = Order_ammount;
}
int Order::getOrder_ammount()
{
	return this->Order_ammount;
}

void Order::setOrder_Adress(string Order_Adress)
{
	this->Order_Adress = Order_Adress;
}
string Order::getOrder_Adress()
{
	return this->Order_Adress;
}

void Order::setOrder_Email(string Order_Email)
{
	this->Order_Email = Order_Email;
}
string Order::getOrder_Email()
{
	return this->Order_Email;
}

void Order::setOrder_Date(string Order_Date)
{
	this->Order_Date = Order_Date;
}
string Order::getOrder_Date()
{
	return this->Order_Date;
}

void Order::setOrder_Status(bool Order_Status)
{
	this->Order_Status = Order_Status;
}
bool Order::getOrder_Status()
{
	return this->Order_Status;
}

string Order::description()
{
	string text = "";

	text += "Order_id: " + to_string(this->Order_id) + "\n";
	text += "Order_customerId: " + to_string(this->Order_customerId) + "\n";
	text += "Order_ammount: " + to_string(this->Order_ammount) + "\n";
	text += "Order_Adress: " + this->Order_Adress + "\n";
	text += "Order_Email: " + this->Order_Email + "\n";
	text += "Order_Date: " + this->Order_Date + "\n";
	text += "Order_Status: " + to_string(this->Order_Status) + "\n";

	return text;
}

string Order::toSave()
{
	string text = "";

	text += to_string(this->Order_id) + " ";
	text += to_string(this->Order_customerId) + " ";
	text += to_string(this->Order_ammount) + " ";
	text += this->Order_Adress + " ";
	text += this->Order_Email + " ";
	text += this->Order_Date + " ";
	text += to_string(this->Order_Status);

	return text;
}




