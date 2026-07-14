#include <iostream>
#include <string>
#include <list>
#include <algorithm>
using namespace std;

struct Color {
	string GREEN = "\033[32m";
	string RED = "\033[31m";
	string CYAN = "\033[36m";
	string YELLOW = "\033[36m";
	string RESET = "\033[0m";
};

Color col;

int main() {
	list<string> medicalBots;
	int userChoice;
	string botName;
	
	medicalBots.push_back("MedBot-Alpha");
	medicalBots.push_back("MedBot-Beta");
	
	while (true) {
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		cout << "      🤖 A C T I V E   E M E R G E N C Y   M E D I C A L S   B OT S   : " << endl;
		if (medicalBots.empty()) {
			cout << endl;
			cout <<  "        [    N O  bots active. System Vulnerable!    ]      "  << endl;
			cout << endl;
			
		} else {
			int counter  = 1;
			
			for (const string& bot : medicalBots) {
				cout << "   " << counter << ".  " << bot << endl;
				counter++;
			}
			
		}
		cout << endl;
		cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << endl;
		
		cout << endl;
		cout << "\t🛡️ B O T   R E G I S T R Y   M A N A G E M E N T " << endl;
		cout << col.CYAN << "1. Commission Bot to FRONT (Immediate Priority) " << endl;
		cout << "2. Deploy Bot to BACK (Standard Queue) " << endl;
		cout << "3. Decommission Specific Bot by Name (Search & Destroy)" << endl;
		cout << "4. Exit Mission 2" << col.RESET << endl;
		cout << endl;
		cout << "Enter your choice  (1-4)   :          ";
		cin >> userChoice;
		
		cin.ignore();
		
		if (userChoice == 1) {
			cout << "Enter Bot Designatrion to put at FRONT   : ";
			getline(cin, botName);
			
			medicalBots.push_back(botName);
			cout << endl;
			cout << col.GREEN << "  ✨  ' " << botName << " ' successfull prioritized at the front of the list! " << col.RESET << endl;
			
		} else if (userChoice == 2) {
			cout << "Enter Bot Designation to put at BACK  : ";
			getline(cin, botName);
			
			medicalBots.push_back(botName);
			cout << endl;
			cout << col.GREEN << " ⚡ ' " << botName << " '  append to the end of the list." << col.RESET << endl;
			
		} else if (userChoice == 3) {
		cout <<  endl;
		if (medicalBots.empty()) {
			cout << col.RED << " ❌ No bots in the list to remove. " << col.RESET << endl;
		} else {
			cout << "Enter exact Bot Designation to decommission :  ";
			getline(cin, botName);
			
			auto it = find(medicalBots.begin(), medicalBots.end(), botName);
			
			if (it != medicalBots.end()) {
				medicalBots.erase(it);
				cout << endl;
				cout << col.YELLOW << "🗑️ Connection severed. ' " << botName << " '  decommissioned."  << col.RESET << endl;
			} else {
				cout << endl;
				cout << col.RED << "⚠️ Target bot not found in current list memore." << col.RESET << endl;
			}
		} 
	} else if (userChoice == 4) {
		cout << endl;
		cout << "Exiting Medical Bot Command Mainframe. HAPPY BIRTHDAY, JINKY!  🎂🚀" << endl;
		break;
		
	} else {
		cout << endl;
		cout << col.RED << " ❌ Invalid operational signal." << col.RESET << endl;
	}
}

return 0;
}
			
			
			
			
			
			
