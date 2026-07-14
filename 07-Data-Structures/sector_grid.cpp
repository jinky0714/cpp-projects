#include <iostream>
#include <string>
#include <vector>
using namespace std;

//============================================
//                               M I S S I O N       1
//============================================

int main() {
	vector<string> shieldSectors;
	shieldSectors.push_back("Alpha_Zone");
	shieldSectors.push_back("Beta_Zone");
	
	int userChoice;
	string newSector;
	int index;
	
	while (true) {
		cout << "1. Expand Grid (Add Sector to back)" << endl;
		cout << "2. Direct Scan Sector (Enter index number)" << endl;
		cout << endl;
		cout << "Enter your choice: ";
		cin >> userChoice;
		
		
		if (userChoice == 1) {
			cout << "Add the sector :       ";
			cin >> newSector;
			
			shieldSectors.push_back(newSector);
			
		} else if (userChoice == 2) {
			cout << "Enter the index :     ";
			cin >> index;
			
			if (index >= 0 && index < (int) shieldSectors.size()) {
				cout << "Scanning Sector :  " << shieldSectors[index] << endl;
				
			} else {
				cout << "❌  Danger! Sector index is out of bounds. System scanning aborted." << endl;
				
			}
			
		} else {
			cout << "Invalid Choice!" << endl;
		}
	}
	
	return 0;
}
