
#include <iostream>
#include "Header1.h"
using namespace std;
int main()
{
	Carpet carpet1;
	Table table1;
	Bed bed1;
	Room *room1 = &bed1;
	Room *room2 = &table1;
	Room *room3 = &carpet1;
	int b, t, c, i, h;
	cout << "Create your dream room: " << endl;
	do {
		cout << "Press 1 if you want to add bed" << endl;
		cin >> b;
		cout << "Press 1 if you want to add Table" << endl;
		cin >> t;
		cout << "Press 1 if you want to add Carpet" << endl;
		cin >> c;
		if (b == 1)
			bed1.getLocationB();
		if (t == 1)
			table1.getLocationT();
		if (c == 1)
			carpet1.getLocationC();
		cout << "Your room has:" << endl;
		if (b == 1)
			bed1.getBname();
		if (t == 1)
			table1.getTname();
		if (c == 1)
			carpet1.getCname();
		cout << "Press 1 if you want to change location " << endl;
		cin >> i;
		if (i == 1)
			cout << "Enter new location" << endl;
		if (b == 1)
			room1->rearregement();
		if (t == 1)
			room2->rearregement();
		if (c == 1)
			room3->rearregement();
		cout << "If you want to change all the settings press 0" << endl;
		cin >> h;
	} while (h == 0);
	return 0;
}
