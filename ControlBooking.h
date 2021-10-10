#include "Booking.h"
class ControlBooking
{
private:

	Booking rezervare[100];
	int size = 0;

public:

	ControlBooking();

	void add(Booking b);

	void show();

	int poz(string booking_tite);

	void Delete(string booking_tite);

	int nextId();

	void updatebooking_id(string booking_tite, int newbooking_id);

	void updatebooking_tite(string booking_tite, string newbooking_tite);

	void updatebooking_type(string booking_tite, string newbooking_type);

	void updatebooking_date(string booking_tite, string newbooking_date);

	void load();

	string toSave();

	void save();










};

