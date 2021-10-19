#include"ControlRole.h"
class Order
{
private:
	int Order_id = 1;
	int Order_customerId = 1;
	string Order_Adress = "";
	string Order_Email = "";
	string Order_Date = "";
	bool Order_Status = true;

public:
	Order()
	{

	}

	Order(int, int, string, string, string, bool);

	void setOrder_id(int);
	int getOrder_id();

	void setOrder_customerId(int);
	int getOrder_customerId();

	void setOrder_Adress(string);
	string getOrder_Adress();

	void setOrder_Email(string);
	string getOrder_Email();

	void setOrder_Date(string);
	string getOrder_Date();

	void setOrder_Status(bool);
	bool getOrder_Status();

	string description();

	string toSave();

};

