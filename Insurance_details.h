#include"ControlOrderDetails.h"

class Insurance_details
{
private:

	int Insurance_details_id = 1;
	int Insurance_details_insurance_Id = 1;
	int Insurance_details_Bike_Id = 1;
	int Insurance_details_insurance_ammount = 1;
	int Insurance_details_insurance_price = 1;

public:

	Insurance_details()
	{

	}

	Insurance_details(int, int, int,int,int);

	void setInsurance_details_id(int);
	int getInsurance_details_id();

	void setInsurance_details_insurance_Id(int);
	int getInsurance_details_insurance_Id();

	void setInsurance_details_Bike_Id(int);
	int getInsurance_details_Bike_Id();

	void setInsurance_details_insurance_ammount(int);
	int getInsurance_details_insurance_ammount();

	void setInsurance_details_insurance_price(int);
	int getInsurance_details_insurance_price();

	string description();

	string toSave();














};

