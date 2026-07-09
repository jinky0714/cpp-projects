#include <iostream>
#include <string>
#include <set>
using namespace std;

class GuestList {
	set <string> guests;
	
	public:
	void addGuest(string name) {
		guests.insert(name);
		cout << name << " tried to sign up! " << endl;
	}
	
	void showGuests() {
		cout << "== O F F I C I A L  S O R T E D  G U E S T  L I S T == " << endl;
		for (string guest : guests) {
			cout << "👤 " << guest << endl;
		}
		
		cout << "T otal Unique Guests: " << guests.size() << endl;
	}
	
};

int main() {
	GuestList myList;
	
	myList.addGuest("Zack");
	myList.addGuest("Alice");
	myList.addGuest("Bob");
	myList.addGuest("Alice");
	
	cout << "\nGenerating final list...\n" << endl;
	myList.showGuests();
	
	
	return 0;
}
