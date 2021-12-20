#include"MTB.h"
class Pegas:public Bike
{

private:

	int anAparitie = 1;

public:

	Pegas()
	{

	}

	Pegas(int, int, int, int, string);

	void set_anAparitie(int);
	int get_anAparitie();

	string description();

	string to_save();


};

