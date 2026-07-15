#include <iostream>
#include <string>
#include <queue>
using namespace std;

struct Color {
	string RED = "\033[31m";
	string GREEN = "\033[32m";
	string YELLOW = "\033[33m";
	string BLUE = "\033[34m";
	string MAGENTA = "\033[35m";
	string CYAN = "\033[36m";
	string RESET = "\033[0m";
	
};

Color col;

class LoginSystem {
private:
string correctUsername = "jinky_admin";
string correctPassword = "password123";

public:
bool  attemptLogin(string inputUsername, string inputPassword) {
	if (inputUsername == correctUsername && inputPassword == correctPassword) {
		return true;
	} else {
		return false;
	}
	
}
};

int main() {
	LoginSystem systemGate;
	
	string userIn;
	string passIn;
	
	cout << "E N T E R  ~  Username  :  ";
	cin >> userIn;
	
	cout << "E N T E R  ~  Password  :  ";
	cin >> passIn;
	
	if (systemGate.attemptLogin(userIn, passIn)) {
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		cout << col.GREEN << "               A C C E S S      G R A N T E D :) " << col.RESET << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
	} else {
		cout << endl;
		cout << "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		cout << col.RESET << "               A C C E S S       D E N I E D  :( " << col.RESET << endl;
		cout << endl;
		cout << "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		return 0;
		
	}
	
	queue<string> ticketPipeline;
	int  choice;
	string complaint;
	
	while (true) {
		cout << endl;
		cout << "************************************************************************************************************************" << endl;
		cout << endl;
		cout << col.YELLOW << "\t 1. File New Complaint  (push to back) " << col.RESET <<  endl;
		cout << endl;
		cout << col.YELLOW << "\t 2. Dispatch Next Ticket (read front, process, then pop)" << col.RESET << endl;
		cout << endl;
		cout << "************************************************************************************************************************" << endl;
		cout << endl;
		
		cout << col.CYAN << "E N T E R  ~ Choice      :      " << col.RESET;
		cin >> choice;
		
		if (choice == 1) {
			cout << endl;
			cout << col.BLUE << " E N T E R  ~ your complaint here   :    " << col.RESET;
			cin.ignore();
			getline(cin, complaint);
			
			ticketPipeline.push(complaint);
			
		} else if (choice == 2) {
			if (!(ticketPipeline.empty())) {
				cout << endl;
				cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu" << endl;
				cout << endl;
				cout << col.GREEN << "            Handling    :     " << col.RESET <<  ticketPipeline.front() << endl;
				cout << endl;
				cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu" << endl;
				cout << endl;
			
				ticketPipeline.pop();
			} else {
				cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << endl;
				cout << col.BLUE << "    Sorry but the queue is currently empty! " << col.RESET << endl;
				cout << endl;
				cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
				cout << endl;
		   }
			
		} else {
			cout << "=======================================================================" << endl;
			cout << endl;
			cout << col.RED << "        Something went wrong, try to run the program again! " << col .RESET << endl;
			cout << endl;
			cout << "=======================================================================" << endl;
			cout << endl;
		}
		
	}
	
	
	
	
	return 0;
}
	
	


















