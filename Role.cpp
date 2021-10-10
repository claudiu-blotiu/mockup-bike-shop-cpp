#include "Role.h"

Role::Role(int role_id, string role_title)
{
	this->role_id = role_id;
	this->role_title = role_title;
}

void Role::setrole_id(int role_id)
{
	this->role_id = role_id;
}
int Role::getrole_id()
{
	return this->role_id;
}

void Role::setrole_title(string role_title)
{
	this->role_title = role_title;
}
string Role::getrole_title()
{
	return this->role_title;
}

string Role::description()
{
	string text = "";

	text += "Role_id: " + to_string(this->role_id) + "\n";
	text += "Role_title: " + this->role_title + "\n";

	return text;
}

string Role::toSave()
{
	string text = "";

	text += to_string(this->role_id) + " ";
	text += this->role_title;

	return text;
}




















