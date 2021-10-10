#include <iostream>
#include <fstream>
#include<string>

using namespace std;

class User
{
private:

	int user_id = 1;
	int user_role_id = 1;
	string user_name = "";
	string user_email = "";
	string user_Dob = "";
	string user_adress = "";

public:
	User()
	{

	}

	User(int, int, string, string, string, string);

	void setuser_id(int);
	int getuser_id();

	void setuser_role_id(int);
	int getuser_role_id();

	void setuser_name(string);
	string getuser_name();

	void setuser_email(string);
	string getuser_email();

	void setuser_Dob(string);
	string getuser_Dob();

	void setuser_adress(string);
	string getuser_adress();

	string description();

	string toSave();
	












};

