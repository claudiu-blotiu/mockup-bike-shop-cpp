#include "ViewUser.h"

ViewUser::ViewUser(Customer c)
{
	this->client = c;

	Booking o(rezervare.nextId(), rezerva.getbooking_tite(), rezerva.getbooking_type(), rezerva.getbooking_date());

	rezerva = o;
}

string ViewUser::meniu()
{
	string text = "";

	text += "--------------------------------------------------------";
	text += "\nApasati tasta 1 pentru a adauga o bicicleta";
	text += "\nApasati tasta 2 pentru a vedea bicicleta din rezervare";
	text += "\nApasati tasta 3 pentru a vedea bicicletele din magazin";
	text += "\nApasati tasta 4 pentru a cumpara bicicletele din cos";
	text += "\nApasati tasta 5 pentru a iesi din magazin";
	text += "\n------------------------------------------------------";
	text += "\n";

	return text;
}

void ViewUser::play()
{
	bool quit = false;
	int choise;

	while (quit == false)
	{
		cout << meniu();

		string x;
		cin >> x;

		choise = stoi(x);

		switch (choise)
		{
		
		}
	}
}

void ViewUser::add()
{
	string name = "";

	cout << "Introduceti numele bicicletei" << endl;

	cin >> name;




}










