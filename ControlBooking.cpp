#include "ControlBooking.h"

ControlBooking::ControlBooking()
{
	load();
}

void ControlBooking::add(Booking b)
{
	rezervare[size] = b;
	size++;
}

void ControlBooking::show()
{
	for (int i = 0; i < size; i++)
	{
		cout << rezervare[i].description() << endl;
	}
}

int ControlBooking::poz(string booking_tite)
{
	for (int i = 0; i < size; i++)
	{
		if (rezervare[i].getbooking_tite() == booking_tite)
		{
			return i;
		}
	}
	return -1;
}

void ControlBooking::Delete(string booking_tite)
{
	int p = poz(booking_tite);

	for (int i = p; i < size - 1; i++)
	{
		rezervare[i] = rezervare[i + 1];
	}
	size--;
}

int ControlBooking::nextId()
{
	if (size == 0) {
		return 1;
	}

	return rezervare[size - 1].getbooking_id() + 1;
}

void ControlBooking::updatebooking_id(string booking_tite, int newbooking_id)
{
	int p = poz(booking_tite);

	if (p != -1)
	{
		rezervare[p].setbooking_id(newbooking_id);
	}
	else
	{
		cout << "Wrong booking ID" << endl;
	}
}

void ControlBooking::updatebooking_tite(string booking_tite, string newbooking_tite)
{
	int p = poz(booking_tite);

	if (p != -1)
	{
		rezervare[p].setbooking_tite(newbooking_tite);
	}
	else
	{
		cout << "Wrong booking title" << endl;
	}
}

void ControlBooking::updatebooking_type(string booking_tite, string newbooking_type)
{
	int p = poz(booking_tite);

	if (p != -1)
	{
		rezervare[p].setbooking_type(newbooking_type);
	}
	else
	{
		cout << "Wrong booking type" << endl;
	}
}

void ControlBooking::updatebooking_date(string booking_tite, string newbooking_date)
{
	int p = poz(booking_tite);

	if (p != -1)
	{
		rezervare[p].setbooking_date(newbooking_date);
	}
	else
	{
		cout << "Wrong booking date" << endl;
	}
}

void ControlBooking::load()
{
	ifstream read("Booking.txt");

	while (!read.eof())
	{
		int booking_id;
		read >> booking_id;
		string booking_tite;
		read >> booking_tite;
		string booking_type;
		read >> booking_type;
		string booking_date;
		read >> booking_date;

		if (booking_tite != "Undefined")
		{
			Booking a(booking_id, booking_tite, booking_type, booking_date);
			this->add(a);
		}
	}
}

string ControlBooking::toSave()
{
	string text = "";
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		text += rezervare[i].toSave() + "\n";
	}

	text += rezervare[i].toSave();
	return text;
}

void ControlBooking::save()
{
	ofstream f("Booking.txt");

	f << this->toSave();

	f.close();
}













