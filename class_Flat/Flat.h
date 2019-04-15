#pragma once
#include "Room.h"
#include <iostream>
using namespace std;

class flat {
	int price;
	room *rooms;
	int cntRooms;
public:
	flat(int price) {
		this->price = price;
		this->rooms = nullptr;
		this->cntRooms = 0;
	}
	void addRoom(const room &r) {
		if (this->rooms == nullptr) {

			this->rooms = new room[1];

			rooms[0].rewrite(r);
			cntRooms = 1;
			return;
		}
		room *tmp = new room[cntRooms + 1];
		for (size_t i = 0; i < cntRooms; i++)
			tmp[i].rewrite(rooms[i]);

		tmp[cntRooms].rewrite(r);
		delete[]rooms;
		rooms = tmp;
		cntRooms++;
	}
	int getFlatArea() const {
		int area = 0;
		for (size_t i = 0; i < cntRooms; i++)
		{
			area += rooms[i].getArea();
		}
		return area;
	}
	int checkPrice(const flat& obj){
		if (this->price==obj.price){
			return true;}
		else return false;}
	
	int checkArea(const flat& obj){
		if (this->getFlatArea==obj.getFlatArea){return true;}
		else return false;}
	
			

			
	void info() {
		cout << "Flat amount = " << this->price
			<< "\ncount of rooms = " << cntRooms
			<< "flat area = " << this->getFlatArea()
			<< "rooms:\n";
		for (size_t i = 0; i < cntRooms; i++)
		{
			rooms[i].info();
		}
	}
};
