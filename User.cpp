#include "User.h"

User::User(int user_id, int user_role_id, string user_name, string user_email, string user_Dob, string user_adress)
{
	this->user_id = user_id;
	this->user_role_id = user_role_id;
	this->user_name = user_name;
	this->user_email = user_email;
	this->user_Dob = user_Dob;
	this->user_adress = user_adress;
}

void User::setuser_id(int user_id)
{
	this->user_id = user_id;
}
int User::getuser_id()
{
	return this->user_id;
}

void User::setuser_role_id(int user_role_id)
{
	this->user_role_id = user_role_id;
}
int User::getuser_role_id()
{
	return this->user_role_id;
}

void User::setuser_name(string user_name)
{
	this->user_name = user_name;
}
string User::getuser_name()
{
	return this->user_name;
}

void User::setuser_email(string user_email)
{
	this->user_email = user_email;
}
string User::getuser_email()
{
	return this->user_email;
}

void User::setuser_Dob(string user_Dob)
{
	this->user_Dob = user_Dob;
}
string User::getuser_Dob()
{
	return this->user_Dob;
}

void User::setuser_adress(string user_adress)
{
	this->user_adress = user_adress;
}
string User::getuser_adress()
{
	return this->user_adress;
}

string User::description()
{
	string text = "";

	text += "User id: " + to_string(this->user_id) + "\n";
	text += "User role id: " + to_string(this->user_role_id) + "\n";
	text += "User name: " + this->user_name + "\n";
	text += "User email: " + this->user_email + "\n";
	text += "User Dob: " + this->user_Dob + "\n";
	text += "User adress: " + this->user_adress + "\n";

	return text;
}

string User::toSave()
{
	string text = "";

	text += to_string(this->user_id) + " ";
	text += to_string(this->user_role_id) + " ";
	text += this->user_name + " ";
	text += this->user_email + " ";
	text += this->user_Dob + " ";
	text += this->user_adress;

	return text;
}









