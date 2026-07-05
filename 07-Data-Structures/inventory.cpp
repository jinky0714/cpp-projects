#include <iostream>
#include <vector>
#include <string>
using namespace std;

class LoginSystem {
	private: 
	string correctUsername = "jinky_admin";
	string correctPassword = "password123";
	
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

		cout << " E N  T E R  ~   Username :     ";
		cin >> userIn;
        } while (userIn.empty());
        
        do {
			
			cout << " E N T E R ~ Password :   ";
			cin >> passIn;
		} while (passIn.empty());
		
		if (systemGate.attemptLogin(userIn, passIn)) {
			cout << "_=______________________________________________________________________________________" << endl;
			cout << "                        A C C E S S      G R A N T E D ! ! !                                 " << endl;
			cout << " ________________________________________________________________________________________" << endl;
			cout << endl;
			cout << "\033[35m WELCOME T0 THE WAREHOUSE SYSTEM!\033[0m" << endl;
			cout << endl;
			
		} else {
			cout << "________________________________________________________________________________________" << endl;
		   cout << "                      A C C E S S    D E N I E D ! ! !                                      " << endl;
		   cout << "_________________________________________________________________________________________" << endl;
		return 1;   
	   }
	   
	   vector<string> inventory;
	   
	   bool running = true;
	   
	   while (running ==  true) {
		   cout << "\033[32m ======== WAREHOUSE MENU ==========\033[0m" << endl;
		   cout << "\033[33m 1. Add Tool to Inventory\033[0m" << endl;
		   cout << "\033[33m 2. View All Tools \033[0m"<< endl;
		   cout << "\033[33m 3. Exit \033[0m" << endl;
		   int choice;	   
		   do{
		   cout << "\033[35m C H O O S E  A N  O P T I O N  :   ";
	
	   } while (!(cin >> choice));
	   
	   switch (choice) {
		   case 1:
		   { 
		   cout << " E N T E R  tool name to add :   ";
		   string toolName;
		   cin >> toolName;
		   
		   inventory.push_back(toolName);
		   
		   cout << toolName << "  added successfully! " << endl;
		   break;
	   }
		   case 2:
		   { 
		   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		   cout << "              C U R R E N T      I N V E N T O R Y                                             " << endl;
		   cout << "+++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		   
		   if (inventory.empty()) {
			   cout << " S O R R Y :   The warehouse  is empty! " << endl;
		   } else {
			   for (const string& inventoryy : inventory) {
				   cout << "~ " << inventoryy << endl;
			   }
			}
			break;
		}   
		  case 3:
		  {
			  cout << " T H A N K  Y O U :   Exiting the program! Goodbye! " << endl;
			  running = false;
			  
			  break;
		  }
		  default: 
		  cout << " INVALID CHOICE - PLEASE TRY AGAIN. " << endl;
		  break;
		  
	  }
  }
  
} catch (...) {
	cout << " ERROR :  The system crashed. Try running the program again. " << endl;
}   
   }
	
