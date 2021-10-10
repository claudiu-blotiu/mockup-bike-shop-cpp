#include "Permission.h"

Permission::Permission(int permission_id, int permission_role_id, string permission_title, string permission_modulee)
{
	this->permission_id = permission_id;
	this->permission_role_id = permission_role_id;
	this->permission_title = permission_title;
	this->permission_module = permission_module;
}

void Permission::setpermission_id(int permission_id)
{
	this->permission_id = permission_id;
}
int Permission::getpermission_id()
{
	return this->permission_id;
}

void Permission::setpermission_role_id(int permission_role_id)
{
	this->permission_role_id = permission_role_id;
}
int Permission::getpermission_role_id()
{
	return this->permission_role_id;
}

void Permission::setpermission_title(string permission_title)
{
	this->permission_title = permission_title;
}
string Permission::getpermission_title()
{
	return this->permission_title;
}

void Permission::setpermission_module(string permission_module)
{
	this->permission_module = permission_module;
}
string Permission::getpermission_module()
{
	return this->permission_module;
}

string Permission::description()
{
	string text = "";

	text += "permission_id: " + to_string(this->permission_id) + "\n";
	text += "permission_role_id: " + to_string(this->permission_role_id) + "\n";
	text += "permission_title: " + this->permission_title + "\n";
	text += "permission_module: " + this->permission_module + "\n";
	
	return text;
}

string Permission::toSave()
{
	string text = "";

	text += to_string(this->permission_id) + " ";
	text += to_string(this->permission_role_id) + " ";
	text += this->permission_title + " ";
	text += this->permission_module;

	return text;
}















