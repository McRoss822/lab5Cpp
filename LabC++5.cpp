
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
	int option1, option2, option3, option4, option5;
	cout << "Create your dream room: " << endl;
	do {
		cout << "Press 1 if you want to add bed" << endl;
		cin >> option1;
		cout << "Press 1 if you want to add Table" << endl;
		cin >> option2;
		cout << "Press 1 if you want to add Carpet" << endl;
		cin >> option3;
		if (option1 == 1)
			bed1.get_bed_location();
		if (option2 == 1)
			table1.get_table_location();
		if (option3 == 1)
			carpet1.get_carpet_location();
		cout << "Your room has:" << endl;
		if (option1 == 1)
			bed1.get_bed_name();
		if (option2 == 1)
			table1.get_table_name();
		if (option3 == 1)
			carpet1.get_carpet_name();
		cout << "Press 1 if you want to change location " << endl;
		cin >> option4;
		if (option4 == 1)
			cout << "Enter new location" << endl;
		if (option1 == 1)
			room1->rearregement();
		if (option2 == 1)
			room2->rearregement();
		if (option3 == 1)
			room3->rearregement();
		cout << "If you want to change all the settings press 0" << endl;
		cin >> option5;
	} while (option5 == 0);
	return 0;
}
