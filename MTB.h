#include"BMX.h"
class MTB:public Bike
{
private:

	string tipCadru = "";

public:

	MTB()
	{

	}

	MTB(string, int, int, int, string);

	void set_tipCadru(string);
	string get_tipCadru();

	string description();

	string to_save();



};

