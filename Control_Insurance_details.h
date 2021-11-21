#include"Insurance_details.h"

class Control_Insurance_details
{
private:

	Insurance_details detalii_asig[100];

public:

	int size = 0;

	Control_Insurance_details();

	void add(Insurance_details a);

	void show();

	int poz(int Insurance_details_insurance_Id);

	void Delete(int Insurance_details_insurance_Id);

	int nextId();

	void update_Insurance_details_id(int Insurance_details_insurance_Id, int New_Insurance_details_id);

	void update_Insurance_details_insurance_Id(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_Id);

	void update_Insurance_details_Bike_Id(int Insurance_details_insurance_Id, int New_Insurance_details_Bike_Id);

	void update_Insurance_details_insurance_ammount(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_ammount);

	void update_Insurance_details_insurance_price(int Insurance_details_insurance_Id, int New_Insurance_details_insurance_price);

	Insurance_details* get_insurance(int insurance_id, int& nr);

	void load();

	string toSave();

	void save();



















};

