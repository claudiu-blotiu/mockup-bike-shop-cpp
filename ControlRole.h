#include"Role.h"
class ControlRole
{
private:

	Role roluri[100];
	int size = 0;

public:

	ControlRole();

	void add(Role a);

	void show();

	int poz(string role_title);

	void Delete(string role_title);

	int nextId();

	void updaterole_id(string role_title, int newrole_id);

	void updaterole_title(string role_title, string newrole_title);

	void load();

	string toSave();

	void save();













};

