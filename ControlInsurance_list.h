#include"Insurance_List.h"
class ControlInsurance_list
{
private:

	Insurance_List** lista_asig;
	
public:

	int size = 0;

	ControlInsurance_list();

	void add(Insurance_List* a);

	void show();

	int poz(int Insurance_List_insurance_Id);

	void Delete(int Insurance_List_insurance_Id);

	int nextId();

	void update_Insurance_List_insurance_Id(int Insurance_List_insurance_Id, int New_Insurance_List_insurance_Id);

	void update_Insurance_List_Bike_Id(int Insurance_List_insurance_Id, int New_Insurance_List_Bike_Id);

	void update_Insurance_List_insurance_type(int Insurance_List_insurance_Id, string New_Insurance_List_insurance_type);

	Insurance_List** get_insurance_list(int Insurance_List_insurance_Id, int& nr);

	void load();

	string toSave();

	void save();
};

