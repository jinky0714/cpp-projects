#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Color {
	string aRESET = "\033[0m";
	string RED = "\033[31m";
	string GREEN = "\033[32m";
	string YELLOW = "\033[33m";
	string BLUE = "\033[34m";
	string MAGENTA = "\033[35m";
	string CYAN = "\033[36m";
};

Color col;

class LoginSystem {
	private:
	string correctUsername = "jinky";
	string correctPassword = "1234";
	
	public:
	bool attemptLogin(string inputUsername, string inputPassword) {
		if (correctPassword == inputPassword && correctUsername == inputUsername) {
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
	
	cout << "🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼" << endl;
	cout << col.GREEN << "                                   W E L C O M E   T O   T H I S    S Y S T E M  ! ! !      (✿◠‿◠)" << col.aRESET << endl;
	cout << "🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼🌼" << endl;
	
	cout << col.YELLOW << "This is created by :  JINKY ROSE D. DACOCO" << col.aRESET << endl;
	
	cout << "________________________________________________________________________________________" << endl;
	cout << endl;
	cout << col.BLUE << "E N T E R   ~ Username : " << col.aRESET;
	cin >> userIn;
	cout << col.BLUE << "E NT E R ~ Password : " << col.aRESET;
	cin >> passIn;
	
	if(systemGate.attemptLogin(userIn, passIn)) {
		for (auto s: vector<string> (10, "✧✦✧✦✧✦✧✦")) {
			cout << s;
		}
		
		cout << endl;
		cout << col.GREEN << "\t\t A C C E S S    G R A N T E D ! ! !" << endl;
		cout << endl;
		
		for (auto s: vector<string> (10, "✧✦✧✦✧✦✧✦")) {
			cout << s;
		}
		
	} else {
		for (auto s: vector<string> (10, "★☆★★☆★☆★☆")) {
			cout << s;
		}
		
		cout << endl;
		cout << col.RED << "\t\t A C C E S S   D E N I E D ! ! !" << endl;
		cout << endl;
		
			for (auto s: vector<string> (10, "★☆★★☆★☆★☆")) {
			cout << s;
		}
		
	}
	
	vector<string> schedule;
	try {
		schedule.push_back("8:00 AM - Data Structures");
		schedule.push_back("10:00 AM - Object-Oriented Programming");
		schedule.push_back("1:00 PM - Web Development");
		
		cout << col.CYAN << "──────── ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ────────" << col.aRESET << endl;
		cout << col.MAGENTA << " \t\t T O T A L  C L A S S E S  T O D A Y : " << schedule.size() << endl;
        cout << col.CYAN << "──────── ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ♡ ♥ ────────" << col.aRESET << endl;
        
        for (int i = 0; i < (int) schedule.size(); i++ ) {
			cout << col.GREEN << " C L A S S " << col.aRESET << (i+1)  << " : "  <<col.YELLOW <<  schedule[i] << col.aRESET << endl;
		}
			
        
		
		
		
		
	} catch (...) {
		cout << col.RED << "E R R O R :  Please try to run the program again!" << col.aRESET << endl;
	}
		
	
	
	
	
	return 0;
}
