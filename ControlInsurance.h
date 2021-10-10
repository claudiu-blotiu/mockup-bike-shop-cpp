#include"Insurance.h"
class ControlInsurance
{
private:

	Insurance asigurare[100];
	int size = 0;

public:

	ControlInsurance();

	void add(Insurance i);

	void show();

	int poz(string insurance_number);

	void Delete(string insurance_number);

	int nextId();

	void updateinsurance_id(string insurance_number, int newinsurance_id);

	void updateinsurance_bike_id(string insurance_number, int newinsurance_bike_id);

	void updateinsurance_ammount(string insurance_number, string newinsurance_ammount);

	void updateinsurance_type(string insurance_number, string newinsurance_type);

	void updateinsurance_date(string insurance_number, string newinsurance_date);

	void updateinsurance_number(string insurance_number, string newinsurance_number);

	void updateinsurance_expire(string insurance_number, string newinsurance_expire);

	void load();

	string toSave();

	void save();















};

