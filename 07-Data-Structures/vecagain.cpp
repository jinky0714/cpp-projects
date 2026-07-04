#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<string> shoppingList;
	
	shoppingList.push_back("milk");
	shoppingList.push_back("eggs");
	shoppingList.push_back("coffee");
	shoppingList.push_back("bread");
	
	cout << "Initial list size: " << shoppingList.size() << " items. \n" << endl;
	
	cout << "First item on the list : " << shoppingList.front() << endl;
	cout << "Third item on the list: " << shoppingList.at(2) << endl;
	
	shoppingList.at(1) = "dinosaur eggs";
	cout << "The seond element was updated into: " << shoppingList.at(1) << endl;
	
	shoppingList.pop_back();
	cout << "Current size is: " << shoppingList.size() << endl;
	
	cout << "CURRENT SHOPPING LIST: " << endl;
	
	for (string list : shoppingList) {
		cout << list << endl;
	}
	
	cout << "====================================" << endl;
	
	for (int i = 0; i < (int) shoppingList.size();
	i++) {
		cout << shoppingList[i] << endl;
		
		
	}
	
	
	return 0;
	
}
