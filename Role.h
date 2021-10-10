#include"ControlPermission.h"
class Role
{
private:

	int role_id = 1;
	string role_title = "";

public:

	Role()
	{

	}
	Role(int, string);

	void setrole_id(int);
	int getrole_id();

	void setrole_title(string);
	string getrole_title();

	string description();

	string toSave();
	
	





};

