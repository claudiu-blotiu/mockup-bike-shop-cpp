#include"Pegas.h"
class ControlBike
{
private:

	Bike** bicicleta;
	
public:

	int size = 0;

	ControlBike();

	void add(Bike* b);

	void show();

	int poz(int bike_nr);

	int poz1(string bike_type);

	void Delete(int bike_nr);

	int nextId();

	void updatebike_id(int bike_nr, int newbike_id);

	void updatebike_customer_id(int bike_nr, int newbike_customer_id);

	void updatebike_nr(int bike_nr, int newbike_nr);

	void updatebike_type(int bike_nr, string newbike_type);

	void updatebike_company(int bike_nr, string newbike_company);

	Bike* get_product(int bike_nr);

	Bike* get_product_cos(int bike_id);

	void load();

	string toSave();

	void save();







};

