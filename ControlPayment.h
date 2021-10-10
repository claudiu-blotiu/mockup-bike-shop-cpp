#include "Payment.h"
class ControlPayment
{
private:

	Payment plata[100];
	int size = 0;

public:

	ControlPayment();

	void add(Payment p);

	void show();

	int poz(string payment_date);

	void Delete(string payment_date);

	int nextId();

	void updatepayment_id(string payment_date, int newpayment_id);

	void updatepayment_customer_id(string payment_date, int newpayment_customer_id);

	void updatepayment_date(string payment_date, string newpayment_date);

	void updatepayment_bill(string payment_date, string newpayment_bill);

	void updatepayment_type(string payment_date, string newpayment_type);

	void load();

	string toSave();

	void save();














};

