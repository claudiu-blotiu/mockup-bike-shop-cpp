#include"ControlBike.h"
class Insurance
{
private:

	int insurance_id = 1;
	int insurance_bike_id = 1;
	string insurance_ammount = "";
	string insurance_type = "";
	string insurance_date = "";
	string insurance_number = "";
	string insurance_expire = "";
	int insurance_price = 1;

public:

	Insurance()
	{

	}
	Insurance(int, int, string, string, string, string, string,int);

	void setinsurance_id(int);
	int getinsurance_id();

	void setinsurance_bike_id(int);
	int getinsurance_bike_id();

	void setinsurance_ammount(string);
	string getinsurance_ammount();

	void setinsurance_type(string);
	string getinsurance_type();

	void setinsurance_date(string);
	string getinsurance_date();

	void setinsurance_number(string);
	string getinsurance_number();

	void setinsurance_expire(string);
	string getinsurance_expire();

	void setinsurance_price(int);
	int getinsurance_price();

	string description();

	string toSave();

















};

