#include "ControlOrderDetails.h"

ControlOrderDetails::ControlOrderDetails()
{
	detalii_comanda = new OrderDetails * [100];

	load();
}

void ControlOrderDetails::add(OrderDetails* a)
{
	detalii_comanda[size] = a;
	size++;
}

void ControlOrderDetails::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << detalii_comanda[i]->description();
		cout << endl;
	}
}

int ControlOrderDetails::poz(int OrderDetails_order_Id)
{
	for (int i = 0; i < size; i++)
	{
		if (detalii_comanda[i]->getOrderDetails_order_Id() == OrderDetails_order_Id)
		{
			return i;
		}
	}
	return -1;
}

int ControlOrderDetails::poz_1(int id)
{
	for (int i = 0; i < size; i++)
	{
		if (detalii_comanda[i]->getOrderDetails_id() == id)
		{
			return i;
		}
	}
	return -1;
}

void ControlOrderDetails::Delete(int OrderDetails_order_Id)
{
	int p = poz(OrderDetails_order_Id);
	for (int i = p; i < size - 1; i++)
	{
		detalii_comanda[i] = detalii_comanda[i + 1];
	}
	size--;
}

void ControlOrderDetails::Delete_2(int id)
{
	int p = poz_1(id);

	for (int i = p; i < size - 1; i++)
	{
		detalii_comanda[i] = detalii_comanda[i + 1];
	}
	size--;
}

int ControlOrderDetails::nextId() {

	if (size == 0) {
		return 1;
	}

	return detalii_comanda[size - 1]->getOrderDetails_id() + 1;
}

void ControlOrderDetails::updateOrderID(int OrderDetails_order_Id, int neworderId)
{
	int p = poz(OrderDetails_order_Id);
	if (p != -1)
	{
		detalii_comanda[p]->setOrderDetails_order_Id(neworderId);
	}
	else {
		cout << "Order Id not found" << endl;
	}
}

void ControlOrderDetails::updateBikeId(int OrderDetails_order_Id, int newBikeId)
{
	int p = poz(OrderDetails_order_Id);
	if (p != -1)
	{
		detalii_comanda[p]->setOrderDetails_Bike_Id(newBikeId);
	}
	else
	{
		cout << "Product Id not found" << endl;
	}
}


OrderDetails** ControlOrderDetails::getProducts(int OrderDetails_order_Id, int& number) {

	number = 0;
	OrderDetails** ordersDetails= new OrderDetails*[100];
	
	for (int i = 0; i < size; i++) {

		if (detalii_comanda[i]->getOrderDetails_order_Id() == OrderDetails_order_Id) {

			ordersDetails[number] = detalii_comanda[i];

			number++;
		}
	}

	return ordersDetails;
}

void ControlOrderDetails::load()
{
	ifstream read("OrderDetails.txt");

	while (!read.eof())
	{
		int id;
		read >> id;
		int orderId;
		read >> orderId;
		int bikeId;
		read >> bikeId;
		
		if (id > 0) {

			OrderDetails* g=new OrderDetails(id, orderId, bikeId);
			this->add(g);
		}

	}

	read.close();
}

string ControlOrderDetails::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += detalii_comanda[i]->toSave() + "\n";
	}

	text += detalii_comanda[i]->toSave();
	return text;
}

void ControlOrderDetails::save()
{
	ofstream f("OrderDetails.txt");

	f << this->toSave();

	f.close();
}










