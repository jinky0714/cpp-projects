#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

struct Color{
	string RESET = "\033[0m";
	string GREEN = "\033[  1;32m";
	string RED = "\033[1;31m";
	string BLUE = "\033[1;34m";
};

Color col;

int main() {
	vector <string> turrets;
	
	turrets = {"Sector-A Alpha", "Sector-B Beta", "Sector-C Gamma"};
	
	cout << col.BLUE << "===========================================================================" << col.RESET  << endl;
	cout <<  col.BLUE << "            N E O - M A N I L A  D  I S T R I C T  C O R E  I N I T I A L I Z E D                      " <<  col.RESET << endl;
	cout << col.BLUE << "===========================================================================" << col.RESET <<endl;
	
	cout << col.GREEN << " Fetching Static Security Grid... " << col.RESET << endl;
	
	for (const string& turret : turrets) {
		cout << "Active Defensive Unit : " << turret << endl;
	}
	
	list <string> breachLog;
	
	cout << col.RED << "SIMULATING LIVE CYBER ATTACKS..."  << col.RESET << endl;
	
	breachLog.push_back("Netrunner detected In Sector-B");
	breachLog.push_front("C R I T I C A L : Corporate Mainframe Bypass Attempt!" );
	
	breachLog.push_back("Malware upload detected in Sector-A");
	
	
	cout << col.RED << "\n LIVE BREACH LOG OVERVIEW (Total: " << breachLog.size() << ") ===" << col.RED << endl;
	
	for (const string& breachlog : breachLog) {
		cout << "\t [ A L E R T ] " << breachlog << endl;
	}
	
	cout << col.GREEN << "\n [+] Deploying Countermeasures... Purging oldest and newest logs..." << endl;
	
	breachLog.pop_front();
	breachLog.pop_back();
	
	cout << col.RED << "=== REMAINING THREAT LAYER ===" << col.RESET <<  endl;
	for (string breachlog : breachLog) {
		cout << "\t[STILL ACTIVE] " << breachlog << endl;
    }
    
    cout << col.BLUE << "-----------------------------------------------------------------------------------------------------------------------" << col.RESET << endl;
    cout << col.BLUE << "             SYSTEM STABLE - SESSION TERMINATED                               " << col.RESET << endl;
    cout << col.BLUE << "____________________________________________________________________" << col.RESET << endl;
    
    return 0;
}
	
