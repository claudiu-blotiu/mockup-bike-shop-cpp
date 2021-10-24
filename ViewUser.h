#include"ControlInsurance_list.h"

class ViewUser
{
private:
	Customer client;
	ControlBike produs;
	Control_Insurance_details detalii_asig;
	ControlInsurance asigurat;
	Insurance asigurare;
	ControlInsurance_list lista_asig;
	Insurance_List lista_asigurari;
	ControlPayment plata;
	ControlOrderDetails details;
	ControlOrder comanda;
	Order order;

public:

	ViewUser(Customer c);

	

	string meniu();

	void play();

	void add();

	void asigurare_produs();

	void viewAsigurare();
	
	void viewBooking();
	
	void remove();
	
	void rent();

	void save_insure();


};

