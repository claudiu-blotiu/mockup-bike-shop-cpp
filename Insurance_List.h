#include"Control_Insurance_details.h"
class Insurance_List
{
private:

	int Insurance_List_id = 1;
	int Insurance_List_insurance_Id = 1;
	int Insurance_List_Bike_Id = 1;
	string Insurance_List_insurance_type = "";
	

public:

	Insurance_List()
	{

	}

	Insurance_List(int, int, int,string);

	void setInsurance_List_id(int);
	int getInsurance_List_id();

	void setInsurance_List_insurance_Id(int);
	int getInsurance_List_insurance_Id();

	void setInsurance_List_Bike_Id(int);
	int getInsurance_List_Bike_Id();

	void setInsurance_List_insurance_type(string);
	string getInsurance_List_insurance_type();

	string description();

	string toSave();
};

