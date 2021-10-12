#include "OrderDetails.h"

OrderDetails::OrderDetails(int OrderDetails_id, int OrderDetails_order_Id, int OrderDetails_Bike_Id, int OrderDetails_price, int OrderDetails_quantity)
{
	this->OrderDetails_id = OrderDetails_id;
	this->OrderDetails_order_Id = OrderDetails_order_Id;
	this->OrderDetails_Bike_Id = OrderDetails_Bike_Id;
	this->OrderDetails_price = OrderDetails_price;
	this->OrderDetails_quantity = OrderDetails_quantity;
}

void OrderDetails::setOrderDetails_id(int OrderDetails_id)
{
	this->OrderDetails_id = OrderDetails_id;
}
int OrderDetails::getOrderDetails_id()
{
	return this->OrderDetails_id;
}

void OrderDetails::setOrderDetails_order_Id(int OrderDetails_order_Id)
{
	this->OrderDetails_order_Id = OrderDetails_order_Id;
}
int OrderDetails::getOrderDetails_order_Id()
{
	return this->OrderDetails_order_Id;
}

void OrderDetails::setOrderDetails_Bike_Id(int OrderDetails_Bike_Id)
{
	this->OrderDetails_Bike_Id = OrderDetails_Bike_Id;
}
int OrderDetails::getOrderDetails_Bike_Id()
{
	return this->OrderDetails_Bike_Id;
}

void OrderDetails::setOrderDetails_price(int OrderDetails_price)
{
	this->OrderDetails_price = OrderDetails_price;
}
int OrderDetails::getOrderDetails_price()
{
	return this->OrderDetails_price;
}

void OrderDetails::setOrderDetails_quantity(int OrderDetails_quantity)
{
	this->OrderDetails_quantity = OrderDetails_quantity;
}
int OrderDetails::getOrderDetails_quantity()
{
	return this->OrderDetails_quantity;
}

string OrderDetails::description()
{
	string text = "";

	text += "OrderDetails_id:" + to_string(this->OrderDetails_id) + "\n";
	text += "OrderDetails_order_Id: " + to_string(this->OrderDetails_order_Id) + "\n";
	text += "OrderDetails_Bike_Id: " + to_string(this->OrderDetails_Bike_Id) + "\n";
	text += "OrderDetails_price: " + to_string(this->OrderDetails_price) + "\n";
	text += "OrderDetails_quantity: " + to_string(this->OrderDetails_quantity) + "\n";

	return text;
}

string OrderDetails::toSave()
{
	string text = "";

	text += to_string(this->OrderDetails_id) + " ";
	text += to_string(this->OrderDetails_order_Id) + " ";
	text += to_string(this->OrderDetails_Bike_Id) + " ";
	text += to_string(this->OrderDetails_price) + " ";
	text += to_string(this->OrderDetails_quantity);

	return text;
}
















