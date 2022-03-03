#include <iostream>
using namespace std;
int main() {
	//율리우스력 year % 4 ==0 and year % 100 != 0
	int year;
	cout << "enter year:";
	cin >> year;
	/*if ((year % 4 == 0) && (year % 100 != 0)) {
		cout << "leaf year" << endl;
	}
	else {
		cout << "common year" << endl;
	}*/
	((year % 4 == 0) && (year % 100 != 0)) ? cout << "leaf year" << endl : cout << "common year" << endl;
	//그레고리력 
	/*if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
		cout << "leaf year" << endl;
	}
	else {
		cout << "common year" << endl;
	}*/
	(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))? cout << "leaf year" << endl: cout << "common year" << endl;
}
