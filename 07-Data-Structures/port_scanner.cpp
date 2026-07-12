#include <iostream>
#include <list>
#include <string>
#include <algorithm>
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

class LoginSystem {
	private:
	string correctUsername = "jinky_admin";
	string correctPassword = "password123";
	
	public:
	
	bool attemptLogin (string inputUsername, string inputPassword) {
		if (correctUsername == inputUsername && correctPassword == inputPassword) {
			return true;
			
		} else {
			return false;
			
		}
	}
};

Color col;

class WelcomeMessage {
	public:
	void message() {
		cout << "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		cout << col.YELLOW << "\t Dear Guest,  " << col.RESET << endl;
		cout  << col.GREEN << "\t\tWe're absolutely delighted to have you here and we hope you have a wonderful stay!" << col.RESET << endl;
		cout << endl;
		cout << "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" << endl;
		cout << endl;
		cout << endl;
	}
};

class CreatorMessage : public WelcomeMessage {
	public:
	void message() {
		cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
		cout << endl;
		cout << col.BLUE << "This system is created by :   " << col.RESET << col.CYAN << "    JINKY ROSE D. DACOCO " << col.RESET << endl;
		cout << endl;
		cout << "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa" << endl;
		cout << endl;
		cout << endl;
	}
};

class VerseMessage : public WelcomeMessage {
	public:
	void message() {
		cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu" << endl;
		cout << endl;
		cout << col.MAGENTA << "Matthew 6:33" << col.RESET << endl;
		cout << col.RED << "\t\tPut God first in your life and try to do what is right, and God will take care of everything else you need." << col.RESET << endl;
		cout << endl;
		cout << "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu" << endl;
	} 
};

class LayoutMessage : public WelcomeMessage {
	public:
	void message() {
		cout << "◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇" << endl;
		cout << endl;
		cout << col.YELLOW <<  "\t\t🛡️  J I N K Y ' S  S E C U R I T Y  P O R T  C O N T R O L  W A L L " << col.RESET <<  endl;
		cout << endl;
		
	}
};
				


int main() {
	WelcomeMessage wc;
	CreatorMessage creator;
	VerseMessage verse;
	LayoutMessage layout;
	LoginSystem systemGate;
	
	
	string userIn;
	string passIn;
	
	do {
		cout << col.GREEN << "E N T E R ~  Username :   ";
	    cin >> userIn;
	} while (userIn.empty());
	
	do {
		cout << "E N T E R ~  Password :   ";
		cin >> passIn;
		cout << col.RESET;
		
	} while (passIn.empty());
	
	if (systemGate.attemptLogin(userIn, passIn)) {
		cout << "💚 ■ 💚 ■ 💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■" << endl;
		cout << endl;
		cout << col.YELLOW << "       A C C E S S    G R A N T E D !    (✿◠‿◠)" << col.RESET << endl;
		cout << endl;
		cout << "💚 ■ 💚 ■ 💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■💚 ■ 💚 ■" << endl;
		
		cout << endl;
		wc.message();
		cout << endl;
		creator.message();
		cout << endl;
		cout << endl;
		verse.message();
		cout << endl;
	} else {
		cout << "❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥" << endl;
		cout << endl;
		cout << col.RED << "             A C C E S S      D E N I E D !    :(( " <<col.RESET <<  endl;
		cout << endl;
		cout << "❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥❤️❥" << endl;
		
		cout << endl;
		verse.message();
		cout << endl;
		return 1;
	}
	
	list<string> activePorts;
	int userChoice;
	string portAddress;
	
	while (true) {
		cout << endl;
		layout.message();
		cout << endl;
		if (activePorts.empty()) {
			cout << "[  NO ports currently being monitored. System vulnerable.  ]" << endl;
		} else {
			int counter = 1;
			for (string port : activePorts) {
				cout << "    [Monitor  " << counter << "]    ->    Address : " << port << endl;
			    counter++;
			}
		}
		cout << "◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇◆ ◇" << endl;
		cout << endl;
		
		cout << "╭────────────────────────────────────────────────────────────────────────────────────╮" << endl;
		cout << endl;
		cout << col.RED << "\t📥 F I R E W A L L  O P E R A T I O N A L  C O M M A N D S" << col.RESET << endl;
		cout << endl;
		cout << "╰────────────────────────────────────────────────────────────────────────────────────╯" << endl;
		cout << endl;
		
		cout << col.CYAN << "\t1. Intercept New Port at BACK (Standard Scan Queue" << endl;
		cout << endl;
		cout << "\t2. Inject Emergency Port at  FRONT (Priority Bypass) " << endl;
		cout << endl;
		cout << "\t3. Terminate/Close Specific Port by Name" << endl;
		cout << endl;
		cout << "\t4. Flush All Ports (Emergency System Purge)" << endl;
		cout << endl;
		cout << "\t5. Exit Mainframe" << col.RESET << endl;
		cout << endl;
		cout << endl;
		cout << col.BLUE << "E N T E R  ~  Choice  : " << col.RESET;
		do {
			cin >> userChoice;
		} while (!(userChoice));
		
		cin.ignore();
		cout << endl;
		
		if (userChoice == 1) {
			cout << "E N T E R  port address to queue  (e.g., 'Port 80 - HTTP') : ";
			getline(cin, portAddress);
			
			activePorts.push_back(portAddress);
			
			cout << endl;
			cout << "============================================================================================================================" << endl;
			cout << endl;
			cout << "\t\t✨ System appended port to standard monitor." << endl;
			cout << endl;
			cout << "============================================================================================================================" << endl;
			cout << endl;
			
		} else if (userChoice == 2) {
			cout << "E N T E R  emergency port address (e.g., 'Port 22  - SSH') : ";
			getline(cin, portAddress);
			activePorts.push_front(portAddress);
			
			cout << endl;
			cout << "===========================================================================================================================" << endl;
			cout << endl;
			cout << "\t\t⚡ Priority bypass complete. Port pushed to front line." << endl;
			cout << endl;
			cout << "===========================================================================================================================" << endl;
			cout << endl;
			
		} else if (userChoice == 3) {
			if (activePorts.empty()) {
				cout << "____________________________________________________________________________________________________________________" << endl;
				cout << endl;
				cout << col.RED << "\t❌ N O  active ports to close." << col.RESET << endl;
				cout << endl;
				cout << "____________________________________________________________________________________________________________________" << endl;
				cout << endl;
				
			} else {
				cout << "E N T E R  exact port address name to terminate : ";
				getline(cin, portAddress);
				
				auto it = find(activePorts.begin(), activePorts.end(), portAddress);
				
				if (it != activePorts.end()) {
					activePorts.erase(it);
					cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					cout << endl;
					cout << "\t🗑️ Connection Severed. Port securel closed." << endl;
					cout << endl;
					cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					cout << endl;
					
				} else {
					cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					cout << endl;
					cout << "\t⚠️ Target address not found in current memory cache." << endl;
					cout << endl;
					cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
					cout << endl;
				}
			}
			
		} else if (userChoice == 4) {
			activePorts.clear();
			cout << "[------------------------------------------------------------------------------------------------------------------------------------------------]" << endl;
			cout << endl;
			cout << "\t💥 Firewall flushed. All monitored links destroyed.";
			cout << endl;
			cout << "[-------------------------------------------------------------------------------------------------------------------------------------------------] " << endl;
			cout << endl;
			
		} else if (userChoice == 5) {
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << endl;
			cout << "\tShutting down mainframe console..." << endl;
			cout << endl;
			cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
			cout << endl;
			
		} else {
			cout << "0000000000000000000000000000000000000000000000000000000000000000000000000000" << endl;
			cout << endl;
			cout << " \t❌ Security error : Unknown operation signal." << endl;
			cout << endl;
			cout << "0000000000000000000000000000000000000000000000000000000000000000000000000000" << endl;
			cout << endl;
		}
	}
	
	
	
	
	
	
	
	
	
	
   
	
	
	return 0;
}
