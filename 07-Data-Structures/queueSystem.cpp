#include <iostream>
#include <string>
#include <queue>
using namespace std;

class BankQueue {
	private: 
	queue <string> line;
	
	public: 
	void addCustomer(string name) {
		line.push(name);
		
		cout << name << " joined the line!" << endl;
	}
	
	void serveCustomer() {
		if (line.empty()) {
			    cout << "No customers in line right now!" << endl;
		} else {
				cout << "Now serving : " << line.front();
				line.pop();
			
		}
	}
	
	void showLineStatus() {
		if (line.empty()) {
			cout << "The line is completely empty!" << endl;
		} else {
			cout << "Next up: " << line.front() << endl;
			cout << "Total people waiting: " << line.size() << endl;
		}
	}
			
};

int main() {
	BankQueue bdo;
	
	bdo.addCustomer("ALICE");
	bdo.addCustomer("BOB");
	bdo.addCustomer("BOB");
	bdo.addCustomer("CHARLIE");
	
	cout << "====  CHECKING STATUS  ====" << endl;
	bdo.showLineStatus();
	
	cout << "==== SERVING STAGE ===" << endl;
	bdo.serveCustomer();
	bdo.serveCustomer();
	
	cout << "=== FINAL CHECK === " << endl;
	bdo.showLineStatus();
	
	
	
	return 0;
}
