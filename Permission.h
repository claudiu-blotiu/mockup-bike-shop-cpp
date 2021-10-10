#include"ControlCustomer.h"
class Permission
{
private:
	 
	int permission_id = 1;
	int permission_role_id = 1;
	string permission_title ="";
	string permission_module ="";
	
public:

	Permission()
	{

	}
	Permission(int, int, string, string);

	void setpermission_id(int);
	int getpermission_id();

	void setpermission_role_id(int);
	int getpermission_role_id();

	void setpermission_title(string);
	string getpermission_title();

	void setpermission_module(string);
	string getpermission_module();

	string description();

	string toSave();












};

