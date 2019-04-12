#include "Room.h"
#include <iostream>
using namespace std;
room::room()
{
	name = new char[strlen("hall") + 1];
	strcpy_s(this->name, strlen("hall") + 1, "hall");
	this->area = 20;
}

room::room(const char* name, int area)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->area = area;
}

room::room(const room&obj)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name + 1), obj.name);
	this->area = obj.area;
}


void room::setName()
{
	char tmp[100];
	if (name != nullptr)
	{
		delete[] name;
	}
	cout << "Enter name of room" << endl;
	cin >> tmp;
	this->name = new char[strlen(name + 1)];
	strcpy_s(this->name, strlen(tmp) + 1, tmp);
}
void room::setArea()
{
	int a = 0;
	cout << "enter area of room" << endl;
	cin >> a;
	this->area = a;
}

void room::rewrite(const room & p)
{
	this->area = p.area;
	if (strlen(this->name) != strlen(p.name)) {
		delete[]this->name;
		this->name = new char[strlen(p.name) + 1];
	}
	strcpy_s(this->name, strlen(p.name) + 1, p.name);
}




void room::info() const
{
	cout << "name:  " << name << "   area: " << area << endl;
}

int room::getArea()
{
	return area;
}

bool room::getName()
{
	return name;
}

room::~room() {

	delete[]this->name;
}

