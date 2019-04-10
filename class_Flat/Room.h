using namespace std;
class room_
{
private:
	char* name;
	int area;

public:
	room_(const char* name, int area);
	room_(const char & obj);
	//setters
	void setName();
	void setArea(int a);

	//getters
	void info();
	int getArea();
	bool getName();
	~room_();
};

