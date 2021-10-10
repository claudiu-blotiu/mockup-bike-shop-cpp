#include"ControlPayment.h"
class Booking
{
private:

	int booking_id = 1;
	string booking_tite = "";
	string booking_type = "";
	string booking_date = "";

public:

	Booking()
	{

	}

	Booking(int, string, string, string);

	void setbooking_id(int);
	int getbooking_id();

	void setbooking_tite(string);
	string getbooking_tite();

	void setbooking_type(string);
	string getbooking_type();

	void setbooking_date(string);
	string getbooking_date();

	string description();

	string toSave();













};

