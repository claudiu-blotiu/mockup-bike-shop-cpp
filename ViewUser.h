#include"ControlOrderDetails.h"

class ViewUser
{
private:
	Customer client;
	ControlBike produs;
	ControlOrderDetails details;
	ControlBooking rezervare;
	Booking rezerva;

public:

	ViewUser()
	{

	}

	ViewUser(Customer c);

	string meniu();

	void play();

	void add();

	void viewShowroom();
	
	void viewBooking();
	
	void remove();
	
	void buy();


};

