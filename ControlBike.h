#include"Bike.h"
class ControlBike
{
private:

	Bike bicicleta[100];
	int size = 0;

public:

	ControlBike();

	void add(Bike b);

	void show();

	int poz(string bike_nr);

	void Delete(string bike_nr);

	int nextId();

	void updatebike_id(string bike_nr, int newbike_id);

	void updatebike_customer_id(string bike_nr, int newbike_customer_id);

	void updatebike_nr(string bike_nr, string newbike_nr);

	void updatebike_type(string bike_nr, string newbike_type);

	void updatebike_company(string bike_nr, string newbike_company);

	void load();

	string toSave();

	void save();







};

