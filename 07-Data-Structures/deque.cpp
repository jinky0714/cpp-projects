#include <iostream>
#include <deque>
#include <string>
using namespace std;

class CreateDeque {
	public:
	void deque() {
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout <<"A deque (stands for double-ended queue) however, is more flexible,\n as elements can be added and removed from both ends.\n (at the front and the back). You can also access elements by index number." << endl;
		cout << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << "         C R E A T E   A   D E Q U E " << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		
		// create a deque called  cars that will store strings
		
		cout << endl;

		
	}
};



int main () {
CreateDeque create;
deque<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};      // create a deque called cars that will store strings;	

cout << endl;
create.deque();
cout << endl;

		for (string car : cars) {
			cout << car << endl;
		}
		
	
	
	
	return 0;
}

