#include "ControlInsurance.h"
class Payment
{
private:
	int payment_id = 1;
	int payment_customer_id = 1;
	string payment_date = "";
	string payment_bill = "";
	string payment_type = "";

public:

	Payment()
	{

	}

	Payment(int, int, string, string, string);

	void setpayment_id(int);
	int getpayment_id();

	void setpayment_customer_id(int);
	int getpayment_customer_id();

	void setpayment_date(string);
	string getpayment_date();

	void setpayment_bill(string);
	string getpayment_bill();

	void setpayment_type(string);
	string getpayment_type();

	string description();

	string toSave();




};

