#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include <iomanip>
using namespace std;

struct Color {
	string a = "\033[0m";
	string b = "\033[31m";
	string c = "\033[32m";
	string d = "\033[33m";
	string e = "\033[34m";
	string f = "\033[35m";
	string g = "\033[36m";
};

Color col;

struct AccountDetails {
	string name;
	double balance;
};

class LoginSystem {
	public:
	int correctPin = 2026;
	
	bool attemptLogin(int inputPin) {
		return (inputPin == correctPin);
	}
};

int main() {
	LoginSystem atmGate;
	int userPin;
	
	cout << endl;
	cout << "━━━━━━━━ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ━━━━━━━━" << endl;
	cout << endl;
	cout << col.c << "        W E L C O M E   T O   T H E   2026   B A N K "  << col.a << endl;
	cout << endl;
	cout << "━━━━━━━━ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ✿ ❀ ━━━━━━━━" << endl;
	cout << endl;
	
	cout << col.g << "E N T E R ~   Security PIN to initialize system terminal :   " << col.a;
	cin >> userPin;
	
	if (!atmGate.attemptLogin(userPin)) {
		cout << endl;
		cout << col.e << "❌  ACCESS DENIED :  Self-destructing terminal connections." << col.a << endl;
		return 0;
	}
	
	cout << endl;
	cout << col.b << "🔓 ACCESS GRANTED : System vault initialized." << col.a << endl;
	
	map<int, AccountDetails> bankLedger;
	
	bankLedger[1001] = {"Jinky Admin", 5000.00};
	bankLedger[1002] = {"Professor x ", 150.75};
	
	int choice;
	
	while(true) {
		cout << endl;
		cout << col.f << "------------------------------------------------------------------------------------------------------------------------" << col.a << endl;
		cout << endl;
		cout << "          📊 CURRENT ACTIVE BALANCES (Sorted by Account ID)" << endl;
		cout << endl;
		cout << col.f << "------------------------------------------------------------------------------------------------------------------------" << col.a << endl;
		cout << endl;
		
		if(bankLedger.empty()) {
			cout << endl;
			cout << col.b << "\t\t[ System Vault is Currently Empty ] " << col.a << endl;
		} else {
			for (const auto& account : bankLedger) {
				cout << "💳 ID : " << account.first << "\t | Owner : " << account.second.name << "\t | Balance : "<< col.c << " $ " << fixed << setprecision(2) << account.second.balance << col.a << endl;
			}
		}
		
		cout << col.f << "------------------------------------------------------------------------------------------------------------------------" << col.a << endl;
		
		cout << endl;
		cout << col.c << "\t1. Create New Bank Account" << endl;
		cout << "\t2. Deposit Funds (Update existing)" << endl;
		cout << "\t3. Search / View Single Account Details" << endl;
		cout << col.e << "\t4. Close Account (Erase from system)" << endl;
		cout << col.b << "\t5. Shut Down Terminal" << col.a << endl;
		cout << endl;
		
		cout << col.g << "Select Operation (1-5): " << col.a;
		cin >> choice;
		
		// OPTION 1: CREATE ACCOUNT
		if (choice == 1) {
			int newId;
			string newName;
			double initialDeposit;
			
			cout << "\nEnter New 4-digit Account Number: ";
			cin >> newId;
			
			// Safe check: look if it already exists before making it
			auto it = bankLedger.find(newId);
			if (it != bankLedger.end()) {
				cout << col.b << "❌ Error: Account ID " << newId << " is already taken!" << col.a << endl;
				continue; // Jumps directly back to the top of the menu loop
			}
			
			cout << "Enter Holder Full Name: ";
			cin.ignore(); // Clean buffer so getline doesn't skip!
			getline(cin, newName);
			
			cout << "Enter Initial Deposit Amount: $";
			cin >> initialDeposit;
			
			// Assign data into the map struct bundle
			bankLedger[newId] = {newName, initialDeposit};
			
			cout << col.c << "\n✨ Account created successfully for " << newName << "!" << col.a << endl;
			
		// OPTION 2: DEPOSIT FUNDS
		} else if (choice == 2) {
			int searchId;
			double depositAmount;
			
			cout << "\nEnter Account Number for Deposit: ";
			cin >> searchId;
			
			auto it = bankLedger.find(searchId);
			
			if (it != bankLedger.end()) {
				cout << "Enter Deposit Amount: $";
				cin >> depositAmount;
				
				// Update balance directly inside the map pointer reference
				it->second.balance += depositAmount;
				cout << col.c << "💰 Deposit Processed! Transaction logged safely." << col.a << endl;
			} else {
				cout << col.d << "❌ Error: Account ID not found in system storage." << col.a << endl;
			}
			
		// OPTION 3: SEARCH PROFILE
		} else if (choice == 3) {
			int searchId;
			cout << "\nEnter Account Number to view: ";
			cin >> searchId;
			
			auto it = bankLedger.find(searchId);
			
			if (it != bankLedger.end()) {
				cout << col.e << "\n🔍 --- Verification Found ---" << col.a << endl;
				cout << "   Account Owner     : " << it->second.name << endl;
				cout << "   Available Balance : $" << fixed << setprecision(2) << it->second.balance << endl;
				cout << col.g << "-----------------------------" << col.a << endl;
			} else {
				cout << col.b << "❌ Error: Record missing or unregistered." << col.a << endl;
			}
			
		// OPTION 4: CLOSE ACCOUNT
		} else if (choice == 4) {
			int removeId;
			cout << "\nEnter Account Number to close: ";
			cin >> removeId;
			
			if (bankLedger.erase(removeId)) {
				cout << col.b << "\n🗑️ Vault cleared. Account " << removeId << " dropped from storage." << col.a << endl;
			} else {
				cout << col.f << "❌ Error: No matching account found to clear." << col.a << endl;
			}
			
		// OPTION 5: TERMINATE SYSTEM
		} else if (choice == 5) {
			cout << endl;
			cout << "============================================================================" << endl;
			cout << col.e << "  Saving ledger encryption... Terminal Offline. Sleep well, Jinky! 😴" << col.a << endl;
			cout << "============================================================================" << endl;
			break; // Terminates execution loop
			
		} else {
			cout << col.d << "\n⚠️ Input error. Please choose a valid menu index (1-5)." << col.a << endl;
		}
	}
	
	return 0;
}
	
		
	
	
	
	
