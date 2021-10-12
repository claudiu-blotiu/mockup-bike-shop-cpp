#include"OrderDetails.h"

class ControlOrderDetails
{
private:
	OrderDetails detalii_comanda[100];
	int size = 0;

public:
	ControlOrderDetails();

	void add(OrderDetails a);

	void show();

	int poz(int OrderDetails_order_Id);

	void Delete(int OrderDetails_order_Id);

	int nextId();

	void updateOrderID(int OrderDetails_order_Id, int newOrderId);

	void updateBikeId(int OrderDetails_order_Id, int newBikeId);

	void updatePrice(int OrderDetails_order_Id, int newPrice);

	void updateQuantity(int OrderDetails_order_Id, int newQuantity);

	void load();

	string toSave();

	void save();







};

