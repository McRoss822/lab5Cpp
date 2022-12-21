#include <iostream>
using namespace std;

class Room {
public: virtual void rearregement() {};
};
class Bed :public Room {
private:
	int bed_location[];
public:void get_bed_name() {
	cout << "Bed (" << bed_location[0] << ";" << bed_location[1] << ")" << endl;
}
	  void get_bed_location() {
		  const int n = 2;
		  cout << "Enter Bed's location \n" << endl;
		  for (int i = 0; i < n; i++) {
			  cin >> bed_location[i];
		  }
	  }
	  void rearregement() {
		  const int n = 2;
		  for (int i = 0; i < n; i++) {
			  cin >> bed_location[i];
		  }
		  cout << "New bed's location is (" << bed_location[0] << ";" << bed_location[1] << ")" << endl;
	  };
};
class Table :public Room {
private:
	int table_location[];
public: void get_table_name() {
	cout << "Table (" << table_location[0] << ";" << table_location[1] << ")" << endl;
}
	  void get_table_location() {
		  const int n = 2;
		  cout << "Enter Table's location \n" << endl;
		  for (int i = 0; i < n; i++) {
			  cin >> table_location[i];
		  }
	  }
	  void rearregement() {
		  const int n = 2;
		  for (int i = 0; i < n; i++) {
			  cin >> table_location[i];
		  }
		  cout << "New table's location is (" << table_location[0] << ";" << table_location[1] << ")" << endl;
	  };
};
class Carpet :public Room {
private:
	int carpet_location[];
public: void get_carpet_name() {

	cout << "Carpet (" << carpet_location[0] << ";" << carpet_location[1] << ")" << endl;
};

	  void get_carpet_location() {
		  const int n = 2;
		  cout << "Enter carpet's location \n" << endl;
		  for (int i = 0; i < n; i++) {
			  cin >> carpet_location[i];
		  }
	  }
	  void rearregement() {
		  const int n = 2;
		  for (int i = 0; i < n; i++) {
			  cin >> carpet_location[i];
		  }
		  cout << "New carpet's location is (" << carpet_location[0] << ";" << carpet_location[1] << ")" << endl;
	  };
};
