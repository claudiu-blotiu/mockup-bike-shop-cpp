#include"ControlOrder.h"
class OrderDetails
{
private:

	int OrderDetails_id = 1;
	int OrderDetails_order_Id = 1;
	int OrderDetails_Bike_Id = 1;
	/*string OrderDetails_price = 1;
	int OrderDetails_quantity = 1;*/

public:

	OrderDetails()
	{

	}

	OrderDetails(int, int, int);

	void setOrderDetails_id(int);
	int getOrderDetails_id();

	void setOrderDetails_order_Id(int);
	int getOrderDetails_order_Id();

	void setOrderDetails_Bike_Id(int);
	int getOrderDetails_Bike_Id();

	/*void setOrderDetails_price(int);
	int getOrderDetails_price();

	void setOrderDetails_quantity(int);
	int getOrderDetails_quantity();*/

	string description();

	string toSave();






};

