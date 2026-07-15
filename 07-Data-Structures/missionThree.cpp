#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	stack<string> commandLog;
	int choice;
	string command;
	while (true) {
		cout << "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		cout << "\t |   1. Execute  Terminal Command (push to stack)  " << endl;
		cout << endl;
		cout << "\t |  2. Undo Last Action (print top item, then pop) " << endl;
		cout << endl;
		cout << "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		
		cout << " ~  E N T E R   your choice   :   ";
		cin >> choice;
		
		if (choice == 1) {
			cout << endl;
			
			cout << "Enter Terminal Command :   ";
			cin >> command;
			
			cout << endl;
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << endl;
			cout << "       You entered  " << command << ".  NOW  executing..." << endl;
			cout << endl;
			cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
			cout << endl;
			
			commandLog.push(command);
			
		} else if (choice == 2) {
			cout << endl;
			
			if (!(commandLog.empty())) {
				cout << endl;
				cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
				cout << endl;
				cout << "      Undoing  :  " << commandLog.top() << endl;
				cout << endl;
				cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
				cout << endl;
				
				commandLog.pop();
			} else if (commandLog.empty()) {
				cout << endl;
				cout << "==========================================================================================" << endl;
				cout << endl;
				cout << "        The stack is currently empty! :( " << endl;
				cout << endl;
				cout << "==========================================================================================" << endl;
				cout << endl;
			} else {
				cout << endl;
				cout << "_______________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << "      E R R O R  : The system crashed, please try to run the program again ! " << endl;
				cout << endl;
				cout << "_______________________________________________________________________________________________________" << endl;
				cout << endl;
				
			}
			
		} else {
			cout << endl;
			cout << "##################################################################################" << endl;
			cout << endl;
			cout << "       Something went wrong, please try to run the program again ! :) " << endl;
			cout << endl;
			cout << "##################################################################################" << endl;
			cout << endl;
		}
	}
	
	return 0; 
}
