#include"bike.h"
class BMX:public Bike
{
private:

	int varstaMinima = 1;

public:

	BMX()
	{

	}

	BMX(int, int, int, int, string);

	void set_varstaMinima(int);
	int get_varstaMinima();

	string description();

	string to_save();



};

