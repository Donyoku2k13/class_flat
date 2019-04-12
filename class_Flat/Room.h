#pragma once
using namespace std;
class room
{
private:
	char* name;
	int area;

public:
	room();
	room(const char* name, int area);
	room(const room & obj);
	//setters
	void setName();
	void setArea();
	void rewrite(const room&p);
	//getters
	void info()const;
	int getArea();
	bool getName();
	~room();
}; 
