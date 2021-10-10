#include "Booking.h"

Booking::Booking(int booking_id, string booking_tite, string booking_type, string booking_date)
{
	this->booking_id = booking_id;
	this->booking_tite = booking_tite;
	this->booking_type = booking_type;
	this->booking_date = booking_date;
}

void Booking::setbooking_id(int booking_id)
{
	this->booking_id = booking_id;
}
int Booking::getbooking_id()
{
	return this->booking_id;
}

void Booking::setbooking_tite(string booking_tite)
{
	this->booking_tite = booking_tite;
}
string Booking::getbooking_tite()
{
	return this->booking_tite;
}

void Booking::setbooking_type(string booking_type)
{
	this->booking_type = booking_type;
}
string Booking::getbooking_type()
{
	return this->booking_type;
}

void Booking::setbooking_date(string booking_date)
{
	this->booking_date = booking_date;
}
string Booking::getbooking_date()
{
	return this->booking_date;
}

string Booking::description()
{
	string text = "";

	text += "booking_id: " + to_string(this->booking_id) + "\n";
	text += "booking_tite: " + this->booking_tite + "\n";
	text += "booking_type: " + this->booking_type + "\n";
	text += "booking_date: " + this->booking_date + "\n";

	return text;
}

string Booking::toSave()
{
	string text = "";

	text += to_string(this->booking_id) + " ";
	text += this->booking_tite + " ";
	text += this->booking_type + " ";
	text += this->booking_date;

	return text;
}










