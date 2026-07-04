#include <iostream>
#include <list>
using namespace std;

int main() {
	cout << "==================================" << endl;
	// CREATE A LIST
	list<string> flowers = {"rose", "daisy", "sunflower", "lavender"};
	
	// printing list elements 
	for (const string& bukad : flowers) {
		cout << bukad << endl;
	}
	
	cout << "==================================" << endl;
	
	// ACCESS A LIST
	
	// get the first element
	cout << "First element is :   " << flowers.front() << endl;
	
	// get the last element
	cout << "Last element is :  " << flowers.back() << endl;
	
	cout << "==================================" << endl;
	
	// CHANGE ELEMENT
	
	// change the first element
	flowers.front() = "santan";
	
	cout << "first element updated into :  " << flowers.front() << endl;
	
	// change the last element
	flowers.back() = "tulip";
	
	cout << "last element updated into :  " << flowers.back() << endl;
	
	cout << "==================================" << endl;
	
	// ADD LIST ELEMENT
	
	// add element to the front of the current list 
	flowers.push_front("lily");
	cout << "New flower added in the front :  " << flowers.front() << endl;

	for (const string& bukadd : flowers) {
		cout << "~ " << bukadd << endl;
	
    }	
	// add element to the last of the current list
	flowers.push_back("gumamella");
	cout << "New flower added in the end :  " << flowers.back() << endl;
	
	for (const string& bukaddd : flowers) {
		cout << "~ " << bukaddd << endl;
		
	}
	
	cout << "===================================================================================================================" << endl;
	cout << "U P D A T E :   The system will remove the current first and last element of the list! " << endl;
	
	flowers.pop_front();
	flowers.pop_back();
	
	for (string flower : flowers) {
		cout <<"@ " <<  flower << endl;
	}
	
	cout << "===================================================================================================================" << endl;
	
	cout << " The system will show the current size of the list :  " << flowers.size() << endl;
	
	cout << boolalpha;
	
	cout << "The system is currently empty :   " << flowers.empty() << endl;
	
	
	
	return 0;
}
