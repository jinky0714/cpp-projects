#include <iostream>
#include <stack>
using namespace std;

int main() {
	// CREATE A STACK
	stack<string> cars;          // cannot add elements, so this must always be empty
	
	// ADD ELEMENTS
	// add elements to the stack
	cars.push("Volvo");
	cars.push("BMW");
	cars.push("Ford");
	cars.push("Mazda"); // since this is  a stack the top element is the mazda
	
	
	// ACCESS THE TOP ELEMENT
	// this will output the mazda because the stack is LIFO
	cout << "THE TOP ELEMENT IS : " << cars.top() << endl;
	
	// CHANGE THE TOP ELEMENT
	// change the value of the top element
	cars.top() = "Tesla";
	
	// access the top element again
	cout << "THE TOP ELEMENT HAS BEEN UPDATED ~  I t is now : " << cars.top() << endl;
	
	// REMOVE ELEMENTS
	// we need to use the .pop() in order to remove some element
	
	// remove the last added element (Tesla)
	
	cars.pop();
	
	cout << "So the current top right now in the stack is not the Tesla anymore, due to the fact that it has been removed. So it is now the : " << cars.top() <<  endl;
	
	// GET THE SIZE OF THE STACK
	
	cout << " THE CURRENT SIZE OF THE STACK IS : " << cars.size() << endl;
	
	// CHECK IF THE STACK IS EMPTY
	// the .empty() function will return 1 (true) if the stack is empty. then it will output 0 (false) if it is not empty
	
cout << "THE STACK IS NOW EMPTY :  " << cars.empty();

	return 0;
}
