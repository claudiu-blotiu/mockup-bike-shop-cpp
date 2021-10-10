#include"User.h"
class ControlUser
{
private:

	User utilizator[100];
	int size = 0;

public:

	ControlUser();

	void add(User u);

	void show();

	int poz(string user_name);

	void Delete(string user_name);

	int nextId();

	void updateuser_id(string user_name, int newuser_id);

	void updateuser_role_id(string user_name, int newuser_role_id);

	void updateuser_name(string user_name, string newuser_name);

	void updateuser_email(string user_name, string newuser_email);

	void updateuser_Dob(string user_name, string newuser_Dob);

	void updateuser_adress(string user_name, string newuser_adress);

	void load();

	string toSave();

	void save();












};

