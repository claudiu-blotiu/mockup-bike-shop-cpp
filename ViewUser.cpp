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
	text += "\nApasati tasta 4 pentru a sterge bicicletele din rezervare";
	text += "\nApasati tasta 5 pentru a cumpara bicicletele din cos";
	text += "\nApasati tasta 6 pentru a iesi din magazin";
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
		case 1:add();
			break;
		case 2:viewBooking();
			break;
		case 3:viewShowroom();
			break;
		case 4:remove();
			break;
		case 5:buy();
			break;
		}
	}
}

void ViewUser::add()
{
	string bike_nr = "";

	cout << "Introduceti nr bicicletei" << endl;

	cin >> bike_nr;

	Bike choise = produs.get_product(bike_nr);

	if (choise.getbike_nr() == bike_nr)
	{
		cout << "Introduceti tipul de bicicleta dorita" << endl;

		string bike_type;
		cin >> bike_type;

		if (choise.getbike_type() == bike_type)
		{
			OrderDetails detalii(details.nextId(), rezerva.getbooking_id(), choise.getbike_id());
			
			details.add(detalii);
		}
		else
		{
			cout << "Tipul de bicicleta nu este corect" << endl;
		}
	}


}

void ViewUser::viewBooking()
{
	int ct = 0;

	OrderDetails* produse_cos = details.getProducts(rezerva.getbooking_id(), ct);

	for (int i = 0; i < ct; i++)
	{
		Bike p = produs.get_product_cos(produse_cos[i].getOrderDetails_Bike_Id());

		string descriere = "";

		descriere += "Bike: " + p.getbike_nr() + "\n";
		descriere += "Tipul bicicletei: " + p.getbike_type() + "\n";

		cout << descriere << endl;
	}

}

void ViewUser::viewShowroom()
{
	produs.show();
}

void ViewUser::remove()
{
	string bike_nr = "";

	cout << "Introduceti nr bicicletei" << endl;

	cin >> bike_nr;

	int ct = 0;

	Bike produse = produs.get_product(bike_nr);

	OrderDetails* produseDetaliate = details.getProducts(rezerva.getbooking_id(), ct);

	for (int i = 0; i < ct; i++)
	{
		if (produseDetaliate[i].getOrderDetails_Bike_Id() == produse.getbike_id())
		{
			details.Delete_2(produseDetaliate[i].getOrderDetails_Bike_Id());	
		}
	}
}

void ViewUser::buy()
{
	rezervare.add(rezerva);

	rezervare.save();

	details.save();

	produs.save();
}


