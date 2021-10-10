#include"Permission.h"
class ControlPermission
{
private:

	Permission permisiune[100];
	int size = 0;

public:

	ControlPermission();

	void add(Permission a);

	void show();

	int poz(string permission_title);

	void Delete(string permission_title);

	int nextId();

	void updatepermission_id(string permission_title, int newpermission_id);

	void updatepermission_role_id(string permission_title, int newpermission_role_id);

	void updatepermission_title(string permission_title, string newpermission_title);

	void updatepermission_module(string permission_title, string newpermission_module);

	void load();

	string toSave();

	void save();













};

