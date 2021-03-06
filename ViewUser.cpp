#include "ViewUser.h"

ViewUser::ViewUser(Customer* c)
{
	this->client = c;

	produs = new ControlBike();
	
	detalii_asig = new Control_Insurance_details();
	det_asig = new Insurance_details();
	asigurat = new ControlInsurance();
	asigurare = new Insurance();
	lista_asig = new ControlInsurance_list();
	lista_asigurari = new Insurance_List();
	details = new ControlOrderDetails();
	comanda = new ControlOrder();

	order=new Order(comanda->nextId(), c->getcustomer_id(), c->getcustomer_adress(), c->getcustomer_email(),"0",false);

	lista_asigurari = new Insurance_List(lista_asig->nextId(), asigurare->getinsurance_id(), asigurare->getinsurance_bike_id(),"Type");
}

string ViewUser::meniu()
{
	string text = "";

	text += "--------------------------------------------------------";
	text += "\nApasati tasta 1 pentru a adauga o bicicleta";
	text += "\nApasati tasta 2 pentru a vedea bicicleta din rezervare";
	text += "\nApasati tasta 3 pentru a asigura bicicletele";
	text += "\nApasati tasta 4 pentru a vedea biciletele asigurate";
	text += "\nApasati tasta 5 pentru a sterge bicicletele din rezervare";
	text += "\nApasati tasta 6 pentru a inchiria bicicleta";
	text += "\nApasati tasta 7 pentru a salva asigurarea";
	text += "\nApasati tasta 8 pentru a iesi din magazin";
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
		case 3:asigurare_produs();
			break;
		case 4:viewAsigurare();
			break;
		case 5:remove();
			break;
		case 6:rent();
			break;
		case 7:save_insure();
			break;
		case 8:cout << "La revedere." << endl;
			break;
		}
	}
}

void ViewUser::add()
{
	int bike_nr;

	cout << "Introduceti nr bicicletei" << endl;

	cin >> bike_nr;

	Bike* choise = produs->get_product(bike_nr);

	if (choise->getbike_nr() == bike_nr)
	{
		cout << "Introduceti tipul de bicicleta dorita" << endl;

		string bike_type;
		cin >> bike_type;

		if (choise->getbike_type() == bike_type)
		{
			OrderDetails* detalii=new OrderDetails(details->nextId(), order->getOrder_id(), choise->getbike_id());
			
			details->add(detalii);
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

	for (int i = 1; i <= details->size; i++)
	{
		OrderDetails** produse_cos = details->getProducts(i, ct);

		for (int i = 0; i < ct; i++)
		{
			Bike* p = produs->get_product_cos(produse_cos[i]->getOrderDetails_Bike_Id());

			string descriere = "";

			descriere += "Bike: " + to_string(p->getbike_nr()) + "\n";
			descriere += "Tipul bicicletei: " + p->getbike_type() + "\n";

			cout << descriere << endl;
		}
	}

}

void ViewUser::asigurare_produs()
{
	string insurance_type = "";

	cout << "Introduceti tipul asigurarii" << endl;

	cin >> insurance_type;

	Insurance* choise = asigurat->get_insurance2(insurance_type);

	if (choise->getinsurance_type() == insurance_type)
	{
		cout << "Introduceti cantitatea dorita" << endl;

		int cant;
		cin >> cant;

		if(choise->getinsurance_ammount() > cant)
		{
			Insurance_details* detalii_asigurari=new Insurance_details(detalii_asig->nextId(), choise->getinsurance_id(), det_asig->getInsurance_details_Bike_Id(), cant, choise->getinsurance_price() * cant);

			detalii_asig->add(detalii_asigurari);
			
			/*Insurance_List* lista=new Insurance_List(lista_asig->nextId(), choise->getinsurance_id(), det_asig->getInsurance_details_Bike_Id(), choise->getinsurance_type());

			
			lista_asig->add(lista);*/
		}
		else
		{
			cout << "Wrong Quantity" << endl;
		}
	}
	else
	{
		cout << "Wrong insurance Type" << endl;
	}
	
}

void ViewUser::viewAsigurare()
{
	int ct = 0;

	
	
		Insurance_details** asigurare_cos = detalii_asig->get_insurance(this->asigurare->getinsurance_id(), ct);

		for (int i = 0; i < ct; i++)
		{
			asigurat->get_insurance1(asigurare_cos[i]->getInsurance_details_insurance_Id());

			/*string descriere = "";

			descriere += "Bike: " + to_string(p->getinsurance_bike_id()) + "\n";
			descriere += "Nr asigurare: " + p->getinsurance_number() + "\n";

			cout << descriere << endl;*/
		}
	
}

void ViewUser::remove()
{
	int bike_nr;

	cout << "Introduceti nr bicicletei" << endl;

	cin >> bike_nr;

	int ct = 0;

	Bike* produse = produs->get_product(bike_nr);

	for (int i = 1; i <= details->size; i++)
	{
		OrderDetails** produseDetaliate = details->getProducts(i, ct);

		for (int i = 0; i < ct; i++)
		{
			if (produseDetaliate[i]->getOrderDetails_Bike_Id() == produse->getbike_id())
			{
				details->Delete_2(produseDetaliate[i]->getOrderDetails_Bike_Id());
			}
		}
	}
}

void ViewUser::rent()
{
	comanda->add(order);

	comanda->save();

	details->save();

}

void ViewUser::save_insure()
{
	lista_asig->add(lista_asigurari);

	lista_asig->save();

	detalii_asig->save();
}


