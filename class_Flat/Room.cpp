#include "Room.h"
#include<iostream>

room_::room_(const char* name, int square)
{
	this->name = new char[strlen(name)+1];
	strcpy_s(this->name, strlen(name) + 1, name);
	this->area = square;
}

void room_::setName()
{
	if (name != nullptr)
	{
		delete[] name;
	}
	this->name = new char[strlen(name + 1)];
}
void room_::setArea(int a)
{
	area = a;
}

room_::room_(const room_& obj) {
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name + 1), obj.name);
	this->area = obj.area;
}

void room_::info()
{
	cout << "name:  " << name << "   area: " << area << endl;
}

int room_::getArea()
{
	if (area == 0)
	{
		return;
	}
	return area;
}

bool room_::getName()
{
	return name;
}

room_::~room_()
{
	if (name != nullptr) {
		delete[]name;
    }
}
