#include "flat.h"



void main() {
	flat f(150000);
	room r("bath", 10);
	f.addRoom(r);
	f.addRoom(room("livingroom", 25));
	f.info();
	system("pause");
}
