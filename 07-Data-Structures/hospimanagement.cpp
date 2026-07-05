#include <iostream>
#include <list>
#include <string>
using namespace std;


struct Color {
	string RED = "\033[31m";
	string GREEN = "\033[33m";
	string YELLOW = "\033[34m";
	string MAGENTA = "\033[35m";
	string BLUE = "\033[33m";
	string CYAN = "\033[36m";
	string RESET = "\033[0m";
};

Color col;
class LoginSystem {
	private:
	string correctPassword = "9999";
	string correctUsername = "nurse1";
	public:
	bool attemptLogin(string inputUsername, string inputPassword) {
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

try {

do {
cout << col.BLUE <<  " E N T E R ~   Nurse Username   : ";
cin >> userIn;

} while (userIn.empty());

}
catch(...) {
	cout << "\033[36mE R R O R :   The program crashed, please try to run the program again!\033[0m" << endl;
	return 1;
}

try {
	do {
		cout << col.BLUE <<  " E N T E R ~  Nurse Password   : ";
		cin >> passIn;
		
	} while (passIn.empty());
	
	
}
	catch (...) {
		cout << "\033[34mE R R O R : The program crashed, please try to run the program again!\033[0m" << endl;
	return 2;	
	}

if (systemGate.attemptLogin(userIn, passIn)) {
	cout << col.GREEN << " _______________________________________________________________________________________________________________________" << col.GREEN << endl;
	cout << col.GREEN << "                                                            A C C E S S   G R A N T E D ! ! ! " << col.RESET << endl;
	cout << col.GREEN << "_______________________________________________________________________________________________________________________" << col.RESET << endl;
	
} else {
	cout << col.RED << "_______________________________________________________________________________________________________________________" << col.RED << endl;
	cout << col.RED << "                                                                  A C C E S S   D E N I E D ! ! ! " << col.RESET << endl;
	cout << col.RED << "_______________________________________________________________________________________________________________________" << col.RESET << endl;
	
	return 3;
}
list <string> patientQueue;
bool systemOn = true;

while (systemOn == true) {
	cout << col.CYAN << "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << col.RESET << endl;
	cout << col.YELLOW << "                                 ~~~ C L I N I C   Q U  E  U E   S Y S T E M ~~~ " << col.RESET << endl;
	cout << col.MAGENTA << "||  1. Register New Patient " << col.RESET << endl;
	cout << col.MAGENTA << "|| 2. View Waiting Patients" << col.RESET << endl;
	cout << col.MAGENTA << "|| 3. Call Next Patient " << col.RESET << endl;
	cout << col.MAGENTA << "|| 4. Shutdown System " << col.RESET << endl;
	cout << col.CYAN << "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << col.RESET << endl;
	
	cout << endl;
	
	cout << col.YELLOW << "== C H O O S E  an option  :   ";
	int option;
	cin >> option;
	
			string patientName;
	
	switch (option) {
		case 1:
		{
			do {
		cout << col.BLUE << "E N T E R  Patient Name  :  ";
		cin.ignore();
		getline(cin, patientName);
	 } while (patientName.empty());
	
	 patientQueue.push_back(patientName);
	 
	 cout << col.GREEN << patientName << col.YELLOW << "  added to the waiting list! " << col.RESET << endl;
	 
	 break;
     }
     
     case 2: 
     {
		 cout << col.GREEN << "____ P A T I E N T S    W A I T I N G ___" << col.RESET << endl;
		 
		 if (patientQueue.empty()) {
			 cout << col.RED << "NO patients waiting!" << endl;
		 } else {
			 for (const string& patientList : patientQueue) {
				 cout << col.YELLOW << "[  " << patientList << "  ]" << col.RESET << endl;
			 }
		 }
		 break;
	 }
	 
	 case 3:
	 {
		  if (patientQueue.empty()) {
		 cout << col.RED << " E R R O R :  No patients left in the queue!" << col.RESET << endl;
	 } else {
		 string lastPatient = patientQueue.front();
		 
		 cout << col.BLUE << "Now treating patient :  " << lastPatient << col.RESET << endl;
		 
		 patientQueue.pop_front();
		 
	 }
	 break;
	 
 }
    case 4: 
    cout << col.RED << "Shutting down... " << col.RESET << endl;
    systemOn = false;
	 
	 default: 
	 cout << col.CYAN << "Invalid Option." << col.RESET << endl;
	 break;
 }
 
} 

	 

return 0;
}
