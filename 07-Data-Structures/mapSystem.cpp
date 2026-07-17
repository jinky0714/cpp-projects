#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

struct Color {
	string aColor = "\033[0m";
	string bColor = "\033[31m";
	string cColor = "\033[32m";
	string dColor = "\033[33m";
	string eColor = "\033[34m";
	string fColor = "\033[36m";
	string gColor = "\033[37m";
	string hCOlor = "\033[38m";
};

Color col;

class LoginSystem {
	public: // Changed to public so main() can check the credentials
	string correctUsername = "jinky_admin";
	string correctPassword = "password123";
	
	bool attemptLogin(string inputUsername, string inputPassword) {
		if(correctUsername == inputUsername && correctPassword == inputPassword) {
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
	
	cout << endl;
	cout << "◀ ==============================================================================▶ " << endl;
	cout << endl;
	cout << col.dColor << " \t W E L C O M E    T O   T H I S   S Y S T E M   (✿◠‿◠) " << col.aColor << endl;
	cout << endl;
	cout << "◀ ==============================================================================▶ " << endl;
	cout << endl;
	
	try {
		do {
			cout << col.dColor << " E NT E R   ~   Username :   " << col.aColor;
			cin >> userIn;
		} while(userIn.empty());
	} catch(...) {
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << col.bColor <<  "    E R R O R  :  T he system crashed, refresh or reload the program again!" << col.aColor << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	
	try {
	do {
			cout << col.dColor << " E NT E R   ~   Password  :   " << col.aColor;
			cin >> passIn;
		} while(passIn.empty());
	} catch(...) {
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
		cout << col.bColor <<  "    E R R O R  :  T he system crashed, refresh or reload the program again!" << col.aColor << endl;
		cout << endl;
		cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
		cout << endl;
	}
	
	// Check the login inputs before letting anyone see the database!
	if (!systemGate.attemptLogin(userIn, passIn)) {
		cout << col.bColor << "\n❌ ACCESS DENIED: Invalid Username or Password." << col.aColor << endl;
		return 0; // Exits the program immediately
	}
	
	map<string, char> gradeBook;
	gradeBook.insert({"Jinky", 'A'});
	gradeBook.insert({"Alex", 'B'});
	gradeBook.insert({"Sophia", 'A'});
	
	while(true) {
		cout << endl;
		cout << col.cColor  << "    🏫 S T U D E N T   G R A D E   D A T A B A S E   (Sorted Alphabetically)" << col.aColor << endl;
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@'"<< endl;
		cout << endl;
		if(gradeBook.empty()) { 
			cout << endl;
			cout << col.bColor << "     [  N O   students registered in the database.  ]" << endl;
			cout << endl;
		} else {
			// maps automatically sort by Key (Name)
			for(auto student : gradeBook) {
				cout << endl;
				cout << "|   Name :   " << student.first << "   |   Grade :   " << student.second <<endl;
				cout << endl;
			}
		}
		cout << endl;
		cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
		cout << endl;
		
		cout << "✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧" << endl;
		cout << endl;
		cout << col.fColor;
		cout << "\t1. Add/Update Student Grade" << endl;
		cout << endl;
		cout << "\t2. Search for a Student" << endl;
		cout << endl;
		cout << "\t3. Remove Student Profile" << endl;
		cout << endl;
		cout << "\t4. Exit Program" << endl;
		cout << endl;
		cout << col.aColor;
		cout << "✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧✦✧" << endl;
		
		int  choice;
		string name;
		char  grade;
		
		cout << endl;
		cout << col.gColor << "Enter your choice  :   " << col.aColor;
		cin >> choice;
		
		if (choice == 1) {
			cout << "E N T E R ~   Student Name   :   ";
			cin >> name;
			cout << endl;
			cout << "E N T E R ~   Letter Grade   :   ";
			cin >> grade;
			
			// Changed from .insert to [] so you can update existing students smoothly!
			gradeBook[name] = toupper(grade);
			cout << endl;
			cout << "#######################################################################################################" << endl;
			cout << endl;
			cout << col.cColor << "     ✨ Database updated successfully! " << endl;
			cout << endl;
			cout << "#######################################################################################################" << endl;
			cout << endl;
			
		} else if (choice == 2) {
			cout << endl;
			cout << "E N T E R  ~   Student Name to search :   ";
			cin >> name;
			
			auto it = gradeBook.find(name);
			
			if (it != gradeBook.end()) {
				cout << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << endl;
				// Safe lookup using the scanner pointer data (it->second)
				cout << "            🔍  Found!  " << name << "  has a grade of  " << it->second << endl;
				cout << endl;
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << endl;
			} else {
				cout << endl;
				cout << "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl;
				cout << "            ❌  Error  :    Student  not found. " << endl;
				cout << endl;
				cout << "------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------" << endl;
				cout << endl;
			}
		} else if (choice == 3) {
			cout << endl;
			cout << "E N T E R ~   Student Name to remove :   ";
			cin >> name;
			
			if (gradeBook.erase(name)) {
				cout << endl;
				cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				cout << endl;
				cout << "      🗑️ Record wiped from the database. " << endl;
				cout << endl;
				cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				cout << endl;
			} else { 
				cout << endl;
				cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				cout << endl;
				cout << "      ❌ Error :    Record not found! " <<endl;
				cout << endl;
				cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
				cout << endl;
			}
		} else if (choice == 4) {
			cout << endl;
			cout << "============================================================================" << endl;
			cout << endl;
			cout << "              Terminating System. Goodbye! " <<endl;
			cout << endl;
			cout << "============================================================================" << endl;
			cout << endl;
			break; // Added break so the program actually shuts down!
			
		} else {
			cout << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << endl;
			cout << "      ⚠️  Invalid choice. Please try again. " << endl;
			cout << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << endl;
		}
	}
	
	return 0;
}
