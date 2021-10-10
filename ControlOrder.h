#include"Order.h"
class ControlOrder
{
private:

	Order comanda[100];
	int size = 0;

public:

	ControlOrder();

	void add(Order a);

	void show();

	int poz(int Order_id);

	void Delete(int Order_id);

	void update_Order_id(int Order_id, int New_Order_id);

	void update_Order_customerId(int Order_id, int New_Order_customerId);

	void update_Order_ammount(int Order_id, int New_Order_ammount);

	void update_Order_Adress(int Order_id, string New_Order_Adress);

	void update_Order_Email(int Order_id, string New_Order_Email);

	void update_Order_Date(int Order_id, string New_Order_Date);

	void update_Order_Status(int Order_id, bool New_Order_Status);

	void load();

	string toSave();

	void save();

};

