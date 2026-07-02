#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	for (auto s: vector<string> (5, "💚💚💚💚")) {
		cout << s;
	}
	
	cout << "  W E L C O M E  T O  T H I S  S Y S T E M :   Please enjoy, have a great day!" << endl;
	
	for (auto s: vector<string> (5, "💚💚💚💚")) {
		cout << s;
	}
	
	vector <string> todolist;
	
	cout << "===============================================================================" <<endl;
	cout << "                  BEDTIME TO DO LIST " << endl;
	cout << "===============================================================================" <<endl;
	
	todolist.push_back("Brush your teeth!");
	todolist.push_back("Set morning teeth!");
	todolist.push_back("Go to sleep!");
	
	int listSize = todolist.size();
	cout << " I have " << listSize << " things left to do : " << endl;
	
	for(int i = 0; i < (int)todolist.size(); i++) {
		cout << i+1 << ". " << todolist[i] << endl;
		
	}
	
	
	cout << "_____________________________________________________________________________________________________________" << endl;
	cout << endl;
	cout << "S Y S T E M  C O M P L E T E : Time to sleep ! " << endl;
	
	
	return 0; 
} 
