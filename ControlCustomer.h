#include"Customer.h"
class ControlCustomer
{
private:
	Customer client[100];
	int size = 0;

public:

	ControlCustomer();

	void add(Customer a);

	void show();

	int poz(string customer_name);

	void Delete(string customer_name);

	int nextId();

	void updatecustomer_id(string customer_name, int newcustomer_id);

	void updatecustomer_name(string customer_name, string newcustomer_name);

	void updatecustomer_mobile(string customer_name, string newcustomer_mobile);

	void updatecustomer_email(string customer_name, string newcustomer_email);

	void updatecustomer_password(string customer_name, string newcustomer_password);

	void updatecustomer_adress(string customer_name, string newcustomer_adress);

	void updatecustomer_username(string customer_name, string newcustomer_username);

	Customer get_customer(string name);

	void load();

	string toSave();

	void save();












};

